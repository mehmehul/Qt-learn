#include "widget.h"
#include "ui_widget.h"
//#include <QColor>
#include <QColorDialog>
#include <QSettings>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    for (int i = 0; i < 9; i++) {
        colorList.append(Qt::black);
    }
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_buttton1_clicked()
{
    QColor color = QColorDialog::getColor(colorList[0], this, "Choose background Color");
    if (color.isValid()) {
        // save the color in the memory
        colorList[0] = color;

        // set the background color to the button
        QString css = QString("background-color : %1").arg(color.name());

        ui->button1->setStyleSheet(css);
    }


}

void Widget::on_button2_clicked()
{
    QColor color = QColorDialog::getColor(colorList[1], this, "Choose background Color");
    if (color.isValid()) {
        // save the color in the memory
        colorList[1] = color;

        // set the background color to the button
        QString css = QString("background-color : %2").arg(color.name());

        ui->button2->setStyleSheet(css);
    }
}

void Widget::on_button3_clicked()
{
    QColor color = QColorDialog::getColor(colorList[2], this, "Choose background Color");
    if (color.isValid()) {
        // save the color in the memory
        colorList[2] = color;

        // set the background color to the button
        QString css = QString("background-color : %3").arg(color.name());

        ui->button3->setStyleSheet(css);
    }
}

void Widget::on_button4_clicked()
{
    QColor color = QColorDialog::getColor(colorList[3], this, "Choose background Color");
    if (color.isValid()) {
        // save the color in the memory
        colorList[3] = color;

        // set the background color to the button
        QString css = QString("background-color : %4").arg(color.name());

        ui->button4->setStyleSheet(css);
    }
}

void Widget::on_button5_clicked()
{
    QColor color = QColorDialog::getColor(colorList[4], this, "Choose background Color");
    if (color.isValid()) {
        // save the color in the memory
        colorList[4] = color;

        // set the background color to the button
        QString css = QString("background-color : %5").arg(color.name());

        ui->button5->setStyleSheet(css);
    }
}

void Widget::on_button6_clicked()
{
    QColor color = QColorDialog::getColor(colorList[5], this, "Choose background Color");
    if (color.isValid()) {
        // save the color in the memory
        colorList[5] = color;

        // set the background color to the button
        QString css = QString("background-color : %6").arg(color.name());

        ui->button6->setStyleSheet(css);
    }
}

void Widget::on_button7_clicked()
{
    QColor color = QColorDialog::getColor(colorList[6], this, "Choose background Color");
    if (color.isValid()) {
        // save the color in the memory
        colorList[6] = color;

        // set the background color to the button
        QString css = QString("background-color : %7").arg(color.name());

        ui->button7->setStyleSheet(css);
    }
}

void Widget::on_button8_clicked()
{
    QColor color = QColorDialog::getColor(colorList[7], this, "Choose background Color");
    if (color.isValid()) {
        // save the color in the memory
        colorList[7] = color;

        // set the background color to the button
        QString css = QString("background-color : %8").arg(color.name());

        ui->button8->setStyleSheet(css);
    }
}

void Widget::on_button9_clicked()
{
    QColor color = QColorDialog::getColor(colorList[8], this, "Choose background Color");
    if (color.isValid()) {
        // save the color in the memory
        colorList[8] = color;

        // set the background color to the button
        QString css = QString("background-color : %9").arg(color.name());

        ui->button9->setStyleSheet(css);
    }
}

void Widget::on_saveColorsButton_clicked()
{
    saveColor("button1", colorList[0]);
    saveColor("button2", colorList[1]);
    saveColor("button3", colorList[2]);
    saveColor("button4", colorList[3]);
    saveColor("button5", colorList[4]);
    saveColor("button6", colorList[5]);
    saveColor("button7", colorList[6]);
    saveColor("button8", colorList[7]);
    saveColor("button9", colorList[8]);
}



void Widget::saveColor(QString key, QColor color)
{
    int red = color.red();
    int green = color.green();
    int blue = color.blue();

    QSettings settings("mehul", "SettingsDemo");

    settings.beginGroup("Button Color");
    settings.setValue(key + "r", red);
    settings.setValue(key + "g", green);
    settings.setValue(key + "b", blue);

    settings.endGroup();
}

void Widget::on_loadColorsButton_clicked()
{
    setLoadedColor("button1", 0, ui->button1);
    setLoadedColor("button2", 1, ui->button2);
    setLoadedColor("button3", 2, ui->button3);
    setLoadedColor("button4", 3, ui->button4);
    setLoadedColor("button5", 4, ui->button5);
    setLoadedColor("button6", 5, ui->button6);
    setLoadedColor("button7", 6, ui->button7);
    setLoadedColor("button8", 7, ui->button8);
    setLoadedColor("button9", 8, ui->button9);





}

QColor Widget::loadColor(QString key)
{
    int red = 0;
    int green = 0;
    int blue = 0;

    QSettings settings("mehul", "SettingsDemo");

    settings.beginGroup("Button Color");
    settings.value(key + "r", QVariant(0).toInt());
    settings.value(key + "g", QVariant(1).toInt());
    settings.value(key + "b", QVariant(2).toInt());
    settings.endGroup();

    return QColor(red, green, blue);
}

void Widget::setLoadedColor(QString key, int index, QPushButton *button)
{
    QColor color = loadColor(key);
    colorList[index] = color;
    QString css = QString("background-color : %1;").arg(color.name());

    button->setStyleSheet(css);
}
