#include "customdialog.h"
#include "ui_customdialog.h"

CustomDialog::CustomDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomDialog)
{
    ui->setupUi(this);
}

CustomDialog::~CustomDialog()
{
    delete ui;
}

void CustomDialog::on_pushButton1_clicked()
{
    // set style sheet on a single widget

    ui->pushButton1->setStyleSheet("QPushButton {color : orange; background-color : pink; }");
}
