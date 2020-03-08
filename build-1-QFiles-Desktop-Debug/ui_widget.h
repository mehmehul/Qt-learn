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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *writeButton;
    QPushButton *readButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLineEdit *sourceLineEdit;
    QPushButton *selectFileButton;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *destLineEdit;
    QPushButton *copyButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(574, 398);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_3->addWidget(textEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        writeButton = new QPushButton(Widget);
        writeButton->setObjectName(QStringLiteral("writeButton"));

        verticalLayout->addWidget(writeButton);

        readButton = new QPushButton(Widget);
        readButton->setObjectName(QStringLiteral("readButton"));

        verticalLayout->addWidget(readButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sourceLineEdit = new QLineEdit(Widget);
        sourceLineEdit->setObjectName(QStringLiteral("sourceLineEdit"));

        horizontalLayout->addWidget(sourceLineEdit);

        selectFileButton = new QPushButton(Widget);
        selectFileButton->setObjectName(QStringLiteral("selectFileButton"));

        horizontalLayout->addWidget(selectFileButton);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        destLineEdit = new QLineEdit(Widget);
        destLineEdit->setObjectName(QStringLiteral("destLineEdit"));

        horizontalLayout_2->addWidget(destLineEdit);

        copyButton = new QPushButton(Widget);
        copyButton->setObjectName(QStringLiteral("copyButton"));

        horizontalLayout_2->addWidget(copyButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        writeButton->setText(QApplication::translate("Widget", "Write", Q_NULLPTR));
        readButton->setText(QApplication::translate("Widget", "Read", Q_NULLPTR));
        selectFileButton->setText(QApplication::translate("Widget", "Select File", Q_NULLPTR));
        copyButton->setText(QApplication::translate("Widget", "Copy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
