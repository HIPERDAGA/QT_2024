/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *puerto1;
    QLabel *label_2;
    QPushButton *enviar1;
    QLabel *label_5;
    QSpinBox *puerto2;
    QLabel *label_6;
    QLineEdit *msj2;
    QPushButton *enviar2;
    QLabel *label_7;
    QSpinBox *puerto3;
    QLabel *label_8;
    QLineEdit *msj3;
    QPushButton *enviar3;
    QLabel *label_9;
    QSpinBox *puerto4;
    QLabel *label_10;
    QLineEdit *msj4;
    QPushButton *enviar4;
    QLineEdit *msj1;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(479, 266);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(Widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        puerto1 = new QSpinBox(Widget);
        puerto1->setObjectName("puerto1");
        puerto1->setMaximum(999999999);
        puerto1->setValue(8000);

        gridLayout->addWidget(puerto1, 0, 1, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        enviar1 = new QPushButton(Widget);
        enviar1->setObjectName("enviar1");

        gridLayout->addWidget(enviar1, 0, 4, 1, 1);

        label_5 = new QLabel(Widget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        puerto2 = new QSpinBox(Widget);
        puerto2->setObjectName("puerto2");
        puerto2->setMaximum(999999999);
        puerto2->setValue(8001);

        gridLayout->addWidget(puerto2, 1, 1, 1, 1);

        label_6 = new QLabel(Widget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        msj2 = new QLineEdit(Widget);
        msj2->setObjectName("msj2");

        gridLayout->addWidget(msj2, 1, 3, 1, 1);

        enviar2 = new QPushButton(Widget);
        enviar2->setObjectName("enviar2");

        gridLayout->addWidget(enviar2, 1, 4, 1, 1);

        label_7 = new QLabel(Widget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        puerto3 = new QSpinBox(Widget);
        puerto3->setObjectName("puerto3");
        puerto3->setMaximum(999999999);
        puerto3->setValue(8002);

        gridLayout->addWidget(puerto3, 2, 1, 1, 1);

        label_8 = new QLabel(Widget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 2, 2, 1, 1);

        msj3 = new QLineEdit(Widget);
        msj3->setObjectName("msj3");

        gridLayout->addWidget(msj3, 2, 3, 1, 1);

        enviar3 = new QPushButton(Widget);
        enviar3->setObjectName("enviar3");

        gridLayout->addWidget(enviar3, 2, 4, 1, 1);

        label_9 = new QLabel(Widget);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        puerto4 = new QSpinBox(Widget);
        puerto4->setObjectName("puerto4");
        puerto4->setMaximum(999999999);
        puerto4->setValue(8003);

        gridLayout->addWidget(puerto4, 3, 1, 1, 1);

        label_10 = new QLabel(Widget);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 3, 2, 1, 1);

        msj4 = new QLineEdit(Widget);
        msj4->setObjectName("msj4");

        gridLayout->addWidget(msj4, 3, 3, 1, 1);

        enviar4 = new QPushButton(Widget);
        enviar4->setObjectName("enviar4");

        gridLayout->addWidget(enviar4, 3, 4, 1, 1);

        msj1 = new QLineEdit(Widget);
        msj1->setObjectName("msj1");

        gridLayout->addWidget(msj1, 0, 3, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Puerto", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Mensaje", nullptr));
        enviar1->setText(QCoreApplication::translate("Widget", "Enviar", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Puerto", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "Mensaje", nullptr));
        msj2->setText(QCoreApplication::translate("Widget", "\"$C1STS,IC,STA1,,,,,,,e00*12\\r\\n\"", nullptr));
        enviar2->setText(QCoreApplication::translate("Widget", "Enviar", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "Puerto", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "Mensaje", nullptr));
        msj3->setText(QCoreApplication::translate("Widget", "\"$C1STS,IC,STA2,,,,,,,e00*12\\r\\n\"", nullptr));
        enviar3->setText(QCoreApplication::translate("Widget", "Enviar", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "Puerto", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "Mensaje", nullptr));
        msj4->setText(QCoreApplication::translate("Widget", "\"$C1STS,IC,STA3,,,,,,,e00*12\\r\\n\"", nullptr));
        enviar4->setText(QCoreApplication::translate("Widget", "Enviar", nullptr));
        msj1->setText(QCoreApplication::translate("Widget", "\"$I1STS,I/O,DDU,,,,,,,e00*CS\\r\\n\"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
