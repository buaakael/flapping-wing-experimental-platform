#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

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

private:
    void initSerialPort();
    void closeSerialPort();

private:

    QSerialPort *mySerialPort1;
    QSerialPort *mySerialPort2;
    QSerialPort *mySerialPort3;
    Ui::MyWidget *ui;
};

#endif // MYWIDGET_H
