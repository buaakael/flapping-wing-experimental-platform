#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QtCharts/QtCharts>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QSplineSeries>
#include <QValueAxis>
#include <QPoint>
#include <QPointF>
QT_CHARTS_USE_NAMESPACE
#include "motion.h"
#include "sin_sin_sin.h"

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

private slots:
    void on_openSerialPort_clicked();

    void on_reset_clicked();

    void on_model_clicked();

    void on_run_clicked();

    void on_closeSerialPort_clicked();

    void on_init_clicked();

    void on_debug_clicked();

private:
    void initChart();
    void initSerialPort();
    void closeSerialPort();

private:

    QSerialPort *mySerialPort1;
    QSerialPort *mySerialPort2;
    QSerialPort *mySerialPort3;

    QChart *myChart;
    QSplineSeries *flapSeries;
    QSplineSeries *pitchSeries;
    QSplineSeries *attackSeries;


    Motion *motion = new Sin_Sin_Sin();

    Ui::MyWidget *ui;
};

#endif // MYWIDGET_H
