#include "widget.h"
#include "ui_widget.h"
#include <QPalette>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    // retrieving the palatte for the label
    QPalette palatte = ui->label->palette();

    // editing the palatte
    palatte.setColor(QPalette::Window, Qt::blue);
    palatte.setColor(QPalette::Text, Qt::red);

    // reset the palette to the widget
    ui->label->setPalette(palatte);

    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_activeButton_clicked()
{
    QPalette::ColorGroup activeButtonColorGroup = ui->activeButton->palette().currentColorGroup();
    QPalette::ColorGroup disabledButtonColorGroup = ui->disabledButton->palette().currentColorGroup();

    qDebug() << "Active button color group" << activeButtonColorGroup;
    qDebug() << "Disables button color group" << disabledButtonColorGroup;
}
