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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QLabel *uiTextLabel;
    QLabel *codeTextLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        uiTextLabel = new QLabel(Widget);
        uiTextLabel->setObjectName(QStringLiteral("uiTextLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        uiTextLabel->setFont(font);
        uiTextLabel->setStyleSheet(QLatin1String("background-color: rgb(0, 170, 255);\n"
"color: rgb(255, 85, 0);"));

        verticalLayout->addWidget(uiTextLabel);

        codeTextLabel = new QLabel(Widget);
        codeTextLabel->setObjectName(QStringLiteral("codeTextLabel"));
        codeTextLabel->setFont(font);

        verticalLayout->addWidget(codeTextLabel);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "Click Me", Q_NULLPTR));
        uiTextLabel->setText(QApplication::translate("Widget", "UiText", Q_NULLPTR));
        codeTextLabel->setText(QApplication::translate("Widget", "CodeText", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
