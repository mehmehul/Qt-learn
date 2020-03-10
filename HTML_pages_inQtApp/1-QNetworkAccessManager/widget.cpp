#include "widget.h"
#include "ui_widget.h"

#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDebug>
#include <QIODevice>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    netManager = new QNetworkAccessManager(this);
    netReply = nullptr;
    mDataBuffer = new QByteArray();

    // define net requests
    QNetworkRequest request;
    request.setUrl(QUrl("https://www.abhisheksansanwal.com/"));

    netReply = netManager->get(request);
    connect(netReply, &QIODevice::readyRead, this, &Widget::dataReadyToRead);
    connect(netReply, &QNetworkReply::finished, this, &Widget::dataReadFinished);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::dataReadyToRead()
{
    qDebug() << "some data is avilable";
    mDataBuffer->append((netReply->readAll()));
}

void Widget::dataReadFinished()
{
    qDebug() << "data read finished";
    if (netReply->error()) {
        qDebug() << "Error : " << netReply->errorString();
    }
    else {
        ui->textEdit->setPlainText(QString(*mDataBuffer));
    }
}

