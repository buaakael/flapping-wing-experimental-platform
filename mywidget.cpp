#include "mywidget.h"
#include "ui_mywidget.h"
#include <QTime>
#include <QTimer>
#include <QDebug>


MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    initChart();
    initSerialPort();
}

MyWidget::~MyWidget()
{
    closeSerialPort();
    delete ui;
}

void sleep(unsigned int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

//初始化串口，获取串口信息
void MyWidget::initSerialPort()
{
    foreach (const QSerialPortInfo &Info, QSerialPortInfo::availablePorts())
    {
        QSerialPort tempSerialPort;
        tempSerialPort.setPort(Info);

        if(tempSerialPort.open(QIODevice::ReadWrite))
        {
            ui->com1->addItem(Info.portName());
            ui->com2->addItem(Info.portName());
            ui->com3->addItem(Info.portName());
        }
        else
        {
            ui->com1->addItem(Info.portName() + "端口无效");
            ui->com2->addItem(Info.portName() + "端口无效");
            ui->com3->addItem(Info.portName() + "端口无效");
        }
        tempSerialPort.close();

        if(ui->com1->count()==0)
        {
            ui->com1->addItem("未找到有效端口");
        }
        if(ui->com2->count()==0)
        {
            ui->com2->addItem("未找到有效端口");
        }
        if(ui->com3->count()==0)
        {
            ui->com3->addItem("未找到有效端口");
        }
    }
}

//关闭串口，结束串口通讯
void MyWidget::closeSerialPort()
{
    mySerialPort1->close();
    mySerialPort2->close();
    mySerialPort3->close();
}

//点击按钮，打开串口进行通讯，设定串口的各个状态位
void MyWidget::on_openSerialPort_clicked()
{
    mySerialPort1 = new QSerialPort(this);
    mySerialPort1->setPortName(ui->com1->currentText());
    mySerialPort1->open(QIODevice::ReadWrite);
    mySerialPort1->setBaudRate(QSerialPort::Baud115200);
    mySerialPort1->setDataBits(QSerialPort::Data8);
    mySerialPort1->setParity(QSerialPort::NoParity);
    mySerialPort1->setStopBits(QSerialPort::OneStop);
    mySerialPort1->setFlowControl(QSerialPort::NoFlowControl);

    mySerialPort2 = new QSerialPort(this);
    mySerialPort2->setPortName(ui->com2->currentText());
    mySerialPort2->open(QIODevice::ReadWrite);
    mySerialPort2->setBaudRate(QSerialPort::Baud115200);
    mySerialPort2->setDataBits(QSerialPort::Data8);
    mySerialPort2->setParity(QSerialPort::NoParity);
    mySerialPort2->setStopBits(QSerialPort::OneStop);
    mySerialPort2->setFlowControl(QSerialPort::NoFlowControl);

    mySerialPort3 = new QSerialPort(this);
    mySerialPort3->setPortName(ui->com3->currentText());
    mySerialPort3->open(QIODevice::ReadWrite);
    mySerialPort3->setBaudRate(QSerialPort::Baud115200);
    mySerialPort3->setDataBits(QSerialPort::Data8);
    mySerialPort3->setParity(QSerialPort::NoParity);
    mySerialPort3->setStopBits(QSerialPort::OneStop);
    mySerialPort3->setFlowControl(QSerialPort::NoFlowControl);
}


void MyWidget::on_reset_clicked()
{
    mySerialPort1->write(motion->resetSignal());
    mySerialPort2->write(motion->resetSignal());
    mySerialPort3->write(motion->resetSignal());
}


void MyWidget::on_model_clicked()
{
    mySerialPort1->write(motion->modelSignal());
    mySerialPort2->write(motion->modelSignal());
    mySerialPort3->write(motion->modelSignal());

    sleep(100);

    //发送零位信息，固定电机位置
    mySerialPort1->write(motion->flapResetSignal());
    mySerialPort2->write(motion->pitchResetSignal());
    mySerialPort3->write(motion->attackResetSignal());
}

void MyWidget::on_run_clicked()
{
    QVector<QPointF> fPoints;
    QVector<QPointF> pPoints;
    QVector<QPointF> aPoints;
    int count = 0;
    sleep(3000);
    //移动三个电机到初始化位置
    mySerialPort1->write(motion->flapInitSignal());
    mySerialPort2->write(motion->pitchInitSignal());
    mySerialPort3->write(motion->attackInitSignal());
    sleep(3000);
    //开始运动
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j <=100; ++j)
        {
            mySerialPort1->write(motion->flapSignal(j, 100));
            mySerialPort2->write(motion->pitchSignal(j, 100));
            mySerialPort3->write(motion->attackSignal(j, 100));
            qDebug() << motion->flapAngle(j, 100) << "\t" << motion->pitchAngle(j, 100) << "\t" << motion->attackAngle(j, 100);
            fPoints.append(QPointF(count, motion->flapAngle(j, 100) / double(4000 * 66.0) * 360));
            pPoints.append(QPointF(count, motion->pitchAngle(j, 100) / double(4096 * 128.0) * 360));
            aPoints.append(QPointF(count, motion->attackAngle(j, 100) / double(4096 * 128.0) * 360));
            flapSeries->replace(fPoints);
            pitchSeries->replace(pPoints);
            attackSeries->replace(aPoints);
            sleep(30);
            count++;
        }
    }

    sleep(3000);
    //运动结束，复位到初始位置
    mySerialPort1->write(motion->flapResetSignal());
    mySerialPort2->write(motion->pitchResetSignal());
    mySerialPort3->write(motion->attackResetSignal());
}

void MyWidget::on_closeSerialPort_clicked()
{
    closeSerialPort();
}

void MyWidget::on_init_clicked()
{
    //复位
    mySerialPort1->write(motion->resetSignal());
    mySerialPort2->write(motion->resetSignal());
    mySerialPort3->write(motion->resetSignal());

    sleep(500);

    //选择模式
    mySerialPort1->write(motion->modelSignal());
    mySerialPort2->write(motion->modelSignal());
    mySerialPort3->write(motion->modelSignal());

    sleep(100);

    //发送零位信息，固定电机位置
    mySerialPort1->write(motion->flapResetSignal());
    mySerialPort2->write(motion->pitchResetSignal());
    mySerialPort3->write(motion->attackResetSignal());
}

void MyWidget::on_debug_clicked()
{
    int fAngle = ui->debug_angle1->text().toInt();
    int pAngle = ui->debug_angle2->text().toInt();
    int aAngle = ui->debug_angle3->text().toInt();
//    qDebug() << fAngle << " " << pAngle << " " << aAngle << "\t";

    mySerialPort1->write(motion->flapSignal(fAngle));
    mySerialPort2->write(motion->pitchSignal(pAngle));
    mySerialPort3->write(motion->attackSignal(aAngle));
}

void MyWidget::initChart()
{
    myChart = new QChart();
    flapSeries = new QSplineSeries();
    pitchSeries = new QSplineSeries();
    attackSeries = new QSplineSeries();
    axisX = new QValueAxis();
    axisY = new QValueAxis();
    myChart->legend()->hide();
    myChart->setTheme(QChart::ChartThemeBlueCerulean);
    axisX->setRange(0, 300);
    axisY->setRange(-90,90);
    axisX->setTitleText("Time/s");
    axisY->setTitleText("Angle/°");
    myChart->addSeries(flapSeries);
    myChart->addSeries(pitchSeries);
    myChart->addSeries(attackSeries);
    myChart->setAxisX(axisX, flapSeries);
    myChart->setAxisY(axisY, flapSeries);
    myChart->setAxisX(axisX, pitchSeries);
    myChart->setAxisY(axisY, pitchSeries);
    myChart->setAxisX(axisX, attackSeries);
    myChart->setAxisY(axisY, attackSeries);
    ui->widget->setChart(myChart);
}
