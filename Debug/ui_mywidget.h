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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QComboBox *com1;
    QComboBox *com2;
    QComboBox *com3;
    QPushButton *closeSerialPort;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(653, 485);
        openSerialPort = new QPushButton(MyWidget);
        openSerialPort->setObjectName(QStringLiteral("openSerialPort"));
        openSerialPort->setGeometry(QRect(90, 230, 93, 28));
        reset = new QPushButton(MyWidget);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setGeometry(QRect(90, 330, 93, 28));
        model = new QPushButton(MyWidget);
        model->setObjectName(QStringLiteral("model"));
        model->setGeometry(QRect(230, 330, 93, 28));
        run = new QPushButton(MyWidget);
        run->setObjectName(QStringLiteral("run"));
        run->setGeometry(QRect(370, 330, 93, 28));
        layoutWidget = new QWidget(MyWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 60, 211, 111));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        com1 = new QComboBox(layoutWidget);
        com1->setObjectName(QStringLiteral("com1"));

        verticalLayout_2->addWidget(com1);

        com2 = new QComboBox(layoutWidget);
        com2->setObjectName(QStringLiteral("com2"));

        verticalLayout_2->addWidget(com2);

        com3 = new QComboBox(layoutWidget);
        com3->setObjectName(QStringLiteral("com3"));

        verticalLayout_2->addWidget(com3);


        horizontalLayout->addLayout(verticalLayout_2);

        closeSerialPort = new QPushButton(MyWidget);
        closeSerialPort->setObjectName(QStringLiteral("closeSerialPort"));
        closeSerialPort->setGeometry(QRect(230, 230, 93, 28));

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
        label->setText(QApplication::translate("MyWidget", "\344\270\212\351\203\250\347\224\265\346\234\272", 0));
        label_2->setText(QApplication::translate("MyWidget", "\344\277\257\344\273\260\347\224\265\346\234\272", 0));
        label_3->setText(QApplication::translate("MyWidget", "\345\200\276\350\275\254\347\224\265\346\234\272", 0));
        closeSerialPort->setText(QApplication::translate("MyWidget", "\345\205\263\351\227\255\344\270\262\345\217\243", 0));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
