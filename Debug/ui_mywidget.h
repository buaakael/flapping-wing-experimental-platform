/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QPushButton *openSerialPort;
    QPushButton *reset;
    QPushButton *model;
    QPushButton *run;
    QPushButton *closeSerialPort;
    QPushButton *init;
    QLabel *label;
    QPushButton *debug;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *flap_motor1;
    QComboBox *com1;
    QLineEdit *debug_angle1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pitch_motor1;
    QComboBox *com2;
    QLineEdit *debug_angle2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *attack_motor1;
    QComboBox *com3;
    QLineEdit *debug_angle3;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(1200, 800);
        openSerialPort = new QPushButton(MyWidget);
        openSerialPort->setObjectName(QStringLiteral("openSerialPort"));
        openSerialPort->setGeometry(QRect(110, 170, 93, 28));
        reset = new QPushButton(MyWidget);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setGeometry(QRect(550, 30, 93, 28));
        model = new QPushButton(MyWidget);
        model->setObjectName(QStringLiteral("model"));
        model->setGeometry(QRect(550, 70, 93, 28));
        run = new QPushButton(MyWidget);
        run->setObjectName(QStringLiteral("run"));
        run->setGeometry(QRect(170, 710, 93, 28));
        closeSerialPort = new QPushButton(MyWidget);
        closeSerialPort->setObjectName(QStringLiteral("closeSerialPort"));
        closeSerialPort->setGeometry(QRect(230, 170, 93, 28));
        init = new QPushButton(MyWidget);
        init->setObjectName(QStringLiteral("init"));
        init->setGeometry(QRect(50, 710, 93, 28));
        label = new QLabel(MyWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 40, 121, 20));
        debug = new QPushButton(MyWidget);
        debug->setObjectName(QStringLiteral("debug"));
        debug->setGeometry(QRect(550, 110, 93, 28));
        widget = new QWidget(MyWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(72, 62, 276, 82));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        flap_motor1 = new QLabel(widget);
        flap_motor1->setObjectName(QStringLiteral("flap_motor1"));

        horizontalLayout->addWidget(flap_motor1);

        com1 = new QComboBox(widget);
        com1->setObjectName(QStringLiteral("com1"));

        horizontalLayout->addWidget(com1);

        debug_angle1 = new QLineEdit(widget);
        debug_angle1->setObjectName(QStringLiteral("debug_angle1"));

        horizontalLayout->addWidget(debug_angle1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pitch_motor1 = new QLabel(widget);
        pitch_motor1->setObjectName(QStringLiteral("pitch_motor1"));

        horizontalLayout_2->addWidget(pitch_motor1);

        com2 = new QComboBox(widget);
        com2->setObjectName(QStringLiteral("com2"));

        horizontalLayout_2->addWidget(com2);

        debug_angle2 = new QLineEdit(widget);
        debug_angle2->setObjectName(QStringLiteral("debug_angle2"));

        horizontalLayout_2->addWidget(debug_angle2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        attack_motor1 = new QLabel(widget);
        attack_motor1->setObjectName(QStringLiteral("attack_motor1"));

        horizontalLayout_3->addWidget(attack_motor1);

        com3 = new QComboBox(widget);
        com3->setObjectName(QStringLiteral("com3"));

        horizontalLayout_3->addWidget(com3);

        debug_angle3 = new QLineEdit(widget);
        debug_angle3->setObjectName(QStringLiteral("debug_angle3"));

        horizontalLayout_3->addWidget(debug_angle3);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", 0));
        openSerialPort->setText(QApplication::translate("MyWidget", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        reset->setText(QApplication::translate("MyWidget", "\345\244\215\344\275\215", 0));
        model->setText(QApplication::translate("MyWidget", "\346\250\241\345\274\217", 0));
        run->setText(QApplication::translate("MyWidget", "\350\277\220\345\212\250", 0));
        closeSerialPort->setText(QApplication::translate("MyWidget", "\345\205\263\351\227\255\344\270\262\345\217\243", 0));
        init->setText(QApplication::translate("MyWidget", "\345\210\235\345\247\213\345\214\226", 0));
        label->setText(QApplication::translate("MyWidget", "\350\260\203\350\257\225\350\247\222\345\272\246(\345\215\225\344\275\215/qc)", 0));
        debug->setText(QApplication::translate("MyWidget", "\350\260\203\350\257\225", 0));
        flap_motor1->setText(QApplication::translate("MyWidget", "\344\270\212\351\203\250\347\224\265\346\234\272", 0));
        debug_angle1->setInputMask(QString());
        pitch_motor1->setText(QApplication::translate("MyWidget", "\344\277\257\344\273\260\347\224\265\346\234\272", 0));
        debug_angle2->setInputMask(QString());
        attack_motor1->setText(QApplication::translate("MyWidget", "\345\200\276\350\275\254\347\224\265\346\234\272", 0));
        debug_angle3->setInputMask(QString());
        debug_angle3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
