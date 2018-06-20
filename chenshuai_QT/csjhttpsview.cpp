#include "csjhttpsview.h"
#include "ui_csjhttpsview.h"
#include <QDebug>

#include <QtNetwork>
#include <QFile>
#include <QNetworkRequest>

CSJHttpsView::CSJHttpsView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CSJHttpsView)
{
    ui->setupUi(this);

    resize(1024,576);
    setWindowTitle("网络请求");

    manager = new QNetworkAccessManager(this);

    QObject::connect(manager, SIGNAL(finished(QNetworkReply *)), this, SLOT(finishedSlot(QNetworkReply *)));



}

void CSJHttpsView::NetworkRequest(){

    qDebug()<<"chenshuai";


    QStringList strList;
    //QEventLoop myEvent;
    QString s;

            QHttpMultiPart *multiPart = new QHttpMultiPart(QHttpMultiPart::FormDataType);

            s="://file/ceshi.txt";
            strList=s.split('/');
            s=strList.at(strList.count()-1);

            QHttpPart imagePart;
            imagePart.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("text/plain"));
            imagePart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"text\"; filename=\""+s+"\""));

            QFile *file = new QFile("://file/ceshi.txt");
            file->open(QIODevice::ReadOnly);

            imagePart.setBodyDevice(file);
            file->setParent(multiPart);

            multiPart->append(imagePart);

            QByteArray postData;

            postData.append("username=13666666666&password=MTIzNDU2&flag=3");


//            QNetworkRequest request(QUrl("http://trans.translift.com.cn:82/transD/app/frmProjectUPCOPtxt.aspx?orderid=order001"));
            QNetworkRequest request(QUrl("http://trans.translift.com.cn:82/transD/app/frmReg.aspx"));



//            QNetworkReply *reply= manager->post(request, multiPart);

            QNetworkReply *reply= manager->post(request, postData);


            multiPart->setParent(reply);

            //qDebug() << "tcpSendFile_slot" << fileName;


            //connect(reply, SIGNAL(error(QNetworkReply::NetworkError)), this, SLOT(upLoadError_slot(QNetworkReply::NetworkError)));
            //connect(reply, SIGNAL(downloadProgress(qint64,qint64)), this, SLOT(downloadProgress_slot(qint64,qint64)));
            //connect(reply, SIGNAL(uploadProgress(qint64,qint64)), this, SLOT(uploadProgress_slot(qint64,qint64)));
//            connect(reply, SIGNAL(finished()), this, SLOT(textFinish_slot()));




}







void CSJHttpsView::textFinish_slot(){


     qDebug()<<"成功   ";




}


void CSJHttpsView::finishedSlot(QNetworkReply *reply) {
    printAttribute(reply, QNetworkRequest::HttpStatusCodeAttribute, "HttpStatusCodeAttribute");
    printAttribute(reply, QNetworkRequest::HttpReasonPhraseAttribute, "HttpReasonPhraseAttribute");
//    printAttribute(reply, QNetworkRequest::RedirectionTargetAttribute, "RedirectionTargetAttribute");
//    printAttribute(reply, QNetworkRequest::ConnectionEncryptedAttribute, "ConnectionEncryptedAttribute");
//    printAttribute(reply, QNetworkRequest::CacheLoadControlAttribute, "CacheLoadControlAttribute");
//    printAttribute(reply, QNetworkRequest::CacheSaveControlAttribute, "CacheSaveControlAttribute");
//    printAttribute(reply, QNetworkRequest::SourceIsFromCacheAttribute, "SourceIsFromCacheAttribute");
//    printAttribute(reply, QNetworkRequest::DoNotBufferUploadDataAttribute, "DoNotBufferUploadDataAttribute");
//    printAttribute(reply, QNetworkRequest::HttpPipeliningAllowedAttribute, "HttpPipeliningAllowedAttribute");
//    printAttribute(reply, QNetworkRequest::HttpPipeliningWasUsedAttribute, "HttpPipeliningWasUsedAttribute");
//    printAttribute(reply, QNetworkRequest::CustomVerbAttribute, "CustomVerbAttribute");
//    printAttribute(reply, QNetworkRequest::CookieLoadControlAttribute, "CookieLoadControlAttribute");
//    printAttribute(reply, QNetworkRequest::AuthenticationReuseAttribute, "AuthenticationReuseAttribute");
//    printAttribute(reply, QNetworkRequest::CookieSaveControlAttribute, "CookieSaveControlAttribute");
//    printAttribute(reply, QNetworkRequest::MaximumDownloadBufferSizeAttribute, "MaximumDownloadBufferSizeAttribute");
//    printAttribute(reply, QNetworkRequest::DownloadBufferAttribute, "DownloadBufferAttribute");
//    printAttribute(reply, QNetworkRequest::SynchronousRequestAttribute, "SynchronousRequestAttribute");
//    printAttribute(reply, QNetworkRequest::BackgroundRequestAttribute, "BackgroundRequestAttribute");
//   printAttribute(reply, QNetworkRequest::User, "User");
//    printAttribute(reply, QNetworkRequest::UserMax, "UserMax");
    if(reply->error() == QNetworkReply::NoError) {

        QByteArray buffer = reply->readAll();
        QString dataStr = QString::fromUtf8(buffer);
        qDebug()<<"success   " << dataStr;
    } else {
//        emit requestFailSignal(reply->errorString());
        qDebug()<<"error   " << reply->errorString();
    }
    reply->deleteLater();
}


void CSJHttpsView::printAttribute(QNetworkReply *reply, QNetworkRequest::Attribute code, QString codeStr) {
    QVariant attributeVarient = reply->attribute(code);
    QString result = QString("%1 = %2").arg(codeStr).arg(attributeVarient.toString());
    qDebug()<<"ceshichenshuai   "<<result;
}

CSJHttpsView::~CSJHttpsView()
{
    delete ui;
}

void CSJHttpsView::on_pushButton_clicked()
{
    emit backToMain();
}

void CSJHttpsView::on_pushButton_2_clicked()
{

     NetworkRequest();

}
