#include "widget.h"
#include "ui_widget.h"

#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mNetManager = new QNetworkAccessManager(this);
    mNetReply = nullptr;
    mDataBuffer = new QByteArray();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_fetchButton_clicked()
{
    // intitialize out API data
    const QUrl API_ENDPOINT("https://jsonplaceholder.typicode.com/posts");

    QNetworkRequest request;
    request.setUrl(API_ENDPOINT);

    mNetReply = mNetManager->get(request);
    connect(mNetReply, &QIODevice::readyRead, this, &Widget::dataReadyRead);
    connect(mNetReply, &QNetworkReply::finished, this, &Widget::dataReadFinished);

}

void Widget::dataReadyRead()
{
    mDataBuffer->append(mNetReply->readAll());
}

void Widget::dataReadFinished()
{
    if (mNetReply->error())
    {
        qDebug() <<"Error : " << mNetReply->errorString();
    }
    else {
        qDebug() << QString(*mDataBuffer);
    }
}
