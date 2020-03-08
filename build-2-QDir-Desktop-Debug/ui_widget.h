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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *chooseDirButton;
    QPushButton *createDirButton;
    QPushButton *dirExistsButton;
    QPushButton *dirOrFileButton;
    QPushButton *folderContentsButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(493, 360);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        chooseDirButton = new QPushButton(Widget);
        chooseDirButton->setObjectName(QStringLiteral("chooseDirButton"));

        verticalLayout_2->addWidget(chooseDirButton);

        createDirButton = new QPushButton(Widget);
        createDirButton->setObjectName(QStringLiteral("createDirButton"));

        verticalLayout_2->addWidget(createDirButton);

        dirExistsButton = new QPushButton(Widget);
        dirExistsButton->setObjectName(QStringLiteral("dirExistsButton"));

        verticalLayout_2->addWidget(dirExistsButton);

        dirOrFileButton = new QPushButton(Widget);
        dirOrFileButton->setObjectName(QStringLiteral("dirOrFileButton"));

        verticalLayout_2->addWidget(dirOrFileButton);

        folderContentsButton = new QPushButton(Widget);
        folderContentsButton->setObjectName(QStringLiteral("folderContentsButton"));

        verticalLayout_2->addWidget(folderContentsButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        chooseDirButton->setText(QApplication::translate("Widget", "Chose Dir", Q_NULLPTR));
        createDirButton->setText(QApplication::translate("Widget", "Create Dir", Q_NULLPTR));
        dirExistsButton->setText(QApplication::translate("Widget", "Dir Exist ?", Q_NULLPTR));
        dirOrFileButton->setText(QApplication::translate("Widget", "Dir or File", Q_NULLPTR));
        folderContentsButton->setText(QApplication::translate("Widget", "Folder Contents", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
