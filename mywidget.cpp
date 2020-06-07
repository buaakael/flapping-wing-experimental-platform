#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    initSerialPort();
}

MyWidget::~MyWidget()
{
    closeSerialPort();
    delete ui;
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

