#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

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


void Widget::on_writeButton_clicked()
{
    // save the file to disk
    QString filename = QFileDialog::getSaveFileName(this, "Save as");
    if (filename.isEmpty()) {
        return;
    }
    QFile file(filename);

    // open the file
    if ( !file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) {
        return;
    }

    QTextStream out(&file);
    out << ui->textEdit->toPlainText() << "\n";
}

void Widget::on_readButton_clicked()
{
    QString fileContent;
    // save the file in the disk
    QString filename = QFileDialog::getOpenFileName(this, "Open File");
    if (filename.isEmpty()) {
        return;
    }

    QFile file(filename);
    if ( !file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return;
    }

    QTextStream in(&file);
    QString line = in.readLine();

    while ( !line.isNull()) {
        fileContent.append(line);
        line = in.readLine();
    }
    file.close();

    ui->textEdit->setPlainText(fileContent);
}

void Widget::on_selectFileButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Choose File");

    if (filename.isEmpty()) {
        return;
    }
    ui->sourceLineEdit->setText(filename);
}

void Widget::on_copyButton_clicked()
{
    QString scrFileName = ui->sourceLineEdit->text();
    QString  destFileName = ui->destLineEdit->text();

    if (scrFileName.isEmpty() || destFileName.isEmpty()) {
        return;
    }

    QFile file(scrFileName);
    if (file.copy(destFileName)) {
        QMessageBox::information(this, "Success", "Copy Successful");
    }
    else {
        QMessageBox::information(this, "Failure", "Copy Failed");
    }
}
