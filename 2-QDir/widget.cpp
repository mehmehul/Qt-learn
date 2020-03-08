#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>

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


void Widget::on_chooseDirButton_clicked()
{
    QString filename = QFileDialog::getExistingDirectory(this, "Choose Folder");

    if (filename.isEmpty()) {
        return;
    }
    ui->lineEdit->setText(filename);
}

void Widget::on_createDirButton_clicked()
{
    // create a dir if it doesn't exits already
    QString dirpath = ui->lineEdit->text();
    if (dirpath.isEmpty()) {
        return;
    }
    QDir dir(dirpath);
    if ( !dir.exists()) {
        // create it
        if (dir.mkpath(dirpath)) {
            QMessageBox::information(this, "Message", "Directory created");
        }
    }
    else {
        QMessageBox::information(this, "Message", "Directory already exits");
    }
}

void Widget::on_dirExistsButton_clicked()
{
    // check if director exists
    QString dirPath = ui->lineEdit->text();
    if (dirPath.isEmpty()) {
        return;
    }
    QDir dir(dirPath);
    if (dir.exists()) {
        QMessageBox::information(this, "Message", "Directory Exists");
    }
    else {
        QMessageBox::information(this, "Message", "Directory not exits");
    }
}

void Widget::on_dirOrFileButton_clicked()
{
    QFileInfo fileInfo(ui->listWidget->currentItem()->text());
    if (fileInfo.isDir()) {
        QMessageBox::information(this, "Message", "This is a Dir");
    }
    else if (fileInfo.isFile()) {
        QMessageBox::information(this, "Message", "This is a File");
    }
    else {
        QMessageBox::information(this, "Message", "This is something else");
    }
}

void Widget::on_folderContentsButton_clicked()
{
    QString dirPath = ui->lineEdit->text();
    if (dirPath.isEmpty())
        return;

    QDir dir(dirPath);

    // get the list of files and directories in the folder
    QList<QFileInfo> fileList = dir.entryInfoList();

    for (int i = 0; i < fileList.size(); i++) {
        ui->listWidget->addItem(fileList.at(i).absoluteFilePath());
    }
}
