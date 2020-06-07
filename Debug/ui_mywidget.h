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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QComboBox *com1;
    QComboBox *com2;
    QComboBox *com3;
    QPushButton *openSerialPort;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(653, 485);
        com1 = new QComboBox(MyWidget);
        com1->setObjectName(QStringLiteral("com1"));
        com1->setGeometry(QRect(130, 80, 87, 22));
        com2 = new QComboBox(MyWidget);
        com2->setObjectName(QStringLiteral("com2"));
        com2->setGeometry(QRect(130, 120, 87, 22));
        com3 = new QComboBox(MyWidget);
        com3->setObjectName(QStringLiteral("com3"));
        com3->setGeometry(QRect(130, 160, 87, 22));
        openSerialPort = new QPushButton(MyWidget);
        openSerialPort->setObjectName(QStringLiteral("openSerialPort"));
        openSerialPort->setGeometry(QRect(120, 220, 93, 28));

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", 0));
        openSerialPort->setText(QApplication::translate("MyWidget", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
