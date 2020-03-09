/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *activeButton;
    QPushButton *disabledButton;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(800, 600);
        activeButton = new QPushButton(Widget);
        activeButton->setObjectName(QStringLiteral("activeButton"));
        activeButton->setGeometry(QRect(120, 170, 141, 51));
        disabledButton = new QPushButton(Widget);
        disabledButton->setObjectName(QStringLiteral("disabledButton"));
        disabledButton->setEnabled(false);
        disabledButton->setGeometry(QRect(430, 170, 151, 51));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 320, 251, 121));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        activeButton->setText(QApplication::translate("Widget", "Active Button", Q_NULLPTR));
        disabledButton->setText(QApplication::translate("Widget", "Disabled Button", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "My Label", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
