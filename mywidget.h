#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
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

private:
    void initSerialPort();
    void closeSerialPort();

private:

    QSerialPort *mySerialPort1;
    QSerialPort *mySerialPort2;
    QSerialPort *mySerialPort3;
    Motion *motion = new Sin_Sin_Sin();

    Ui::MyWidget *ui;
};

#endif // MYWIDGET_H
