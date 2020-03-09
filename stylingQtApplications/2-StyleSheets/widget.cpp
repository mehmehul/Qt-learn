#include "widget.h"
#include "ui_widget.h"
#include <customdialog.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    CustomDialog *dialog = new CustomDialog(this);

    // set style sheet on a container widget
    dialog->setStyleSheet("QPushButton {color : blue; background-color : green; }");

    dialog->exec();


}
