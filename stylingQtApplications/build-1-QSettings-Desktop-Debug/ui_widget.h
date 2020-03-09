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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *button9;
    QPushButton *saveColorsButton;
    QPushButton *loadColorsButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(517, 348);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        button1 = new QPushButton(Widget);
        button1->setObjectName(QStringLiteral("button1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button1->sizePolicy().hasHeightForWidth());
        button1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button1, 0, 0, 1, 1);

        button2 = new QPushButton(Widget);
        button2->setObjectName(QStringLiteral("button2"));
        sizePolicy.setHeightForWidth(button2->sizePolicy().hasHeightForWidth());
        button2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button2, 0, 1, 1, 1);

        button3 = new QPushButton(Widget);
        button3->setObjectName(QStringLiteral("button3"));
        sizePolicy.setHeightForWidth(button3->sizePolicy().hasHeightForWidth());
        button3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button3, 0, 2, 1, 1);

        button4 = new QPushButton(Widget);
        button4->setObjectName(QStringLiteral("button4"));
        sizePolicy.setHeightForWidth(button4->sizePolicy().hasHeightForWidth());
        button4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button4, 1, 0, 1, 1);

        button5 = new QPushButton(Widget);
        button5->setObjectName(QStringLiteral("button5"));
        sizePolicy.setHeightForWidth(button5->sizePolicy().hasHeightForWidth());
        button5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button5, 1, 1, 1, 1);

        button6 = new QPushButton(Widget);
        button6->setObjectName(QStringLiteral("button6"));
        sizePolicy.setHeightForWidth(button6->sizePolicy().hasHeightForWidth());
        button6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button6, 1, 2, 1, 1);

        button7 = new QPushButton(Widget);
        button7->setObjectName(QStringLiteral("button7"));
        sizePolicy.setHeightForWidth(button7->sizePolicy().hasHeightForWidth());
        button7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button7, 2, 0, 1, 1);

        button8 = new QPushButton(Widget);
        button8->setObjectName(QStringLiteral("button8"));
        sizePolicy.setHeightForWidth(button8->sizePolicy().hasHeightForWidth());
        button8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button8, 2, 1, 1, 1);

        button9 = new QPushButton(Widget);
        button9->setObjectName(QStringLiteral("button9"));
        sizePolicy.setHeightForWidth(button9->sizePolicy().hasHeightForWidth());
        button9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button9, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        saveColorsButton = new QPushButton(Widget);
        saveColorsButton->setObjectName(QStringLiteral("saveColorsButton"));

        verticalLayout->addWidget(saveColorsButton);

        loadColorsButton = new QPushButton(Widget);
        loadColorsButton->setObjectName(QStringLiteral("loadColorsButton"));

        verticalLayout->addWidget(loadColorsButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        button1->setText(QApplication::translate("Widget", "One", Q_NULLPTR));
        button2->setText(QApplication::translate("Widget", "Two", Q_NULLPTR));
        button3->setText(QApplication::translate("Widget", "Three", Q_NULLPTR));
        button4->setText(QApplication::translate("Widget", "Four", Q_NULLPTR));
        button5->setText(QApplication::translate("Widget", "Five", Q_NULLPTR));
        button6->setText(QApplication::translate("Widget", "Six", Q_NULLPTR));
        button7->setText(QApplication::translate("Widget", "Seven", Q_NULLPTR));
        button8->setText(QApplication::translate("Widget", "Eight", Q_NULLPTR));
        button9->setText(QApplication::translate("Widget", "Nine", Q_NULLPTR));
        saveColorsButton->setText(QApplication::translate("Widget", "Save Colors", Q_NULLPTR));
        loadColorsButton->setText(QApplication::translate("Widget", "Load Colors", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
