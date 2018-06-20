#include "mynetworkobject.h"

MyNetworkObject::MyNetworkObject(QObject *parent) : QObject(parent) {
    networkAccessManager = new QNetworkAccessManager(this);
    dataStr="";
    QObject::connect(networkAccessManager, SIGNAL(finished(QNetworkReply *)), this, SLOT(finishedSlot(QNetworkReply *)));
}
//GET请求
void MyNetworkObject::get(QUrl url) {
    qDebug()<<"get "<<url;
    QNetworkRequest request = QNetworkRequest(url);
    //这里可以加入chrome的请求头部，使其更接近浏览器
    request.setHeader(QNetworkRequest::UserAgentHeader, \
                      QVariant("Mozilla/5.0 (Linux; Android 6.0; Nexus 5 Build/MRA58N) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/46.0.2490.76 Mobile Safari/537.36"));
    networkAccessManager->get(request);
}

//POST请求
void MyNetworkObject::post(QString url,QString parameter){

            QHttpMultiPart *multiPart = new QHttpMultiPart(QHttpMultiPart::FormDataType);
            QByteArray postData;
            postData.append(parameter);
            QNetworkRequest request = QNetworkRequest(QUrl(url));
            QNetworkReply *reply= networkAccessManager->post(request,postData);
            multiPart->setParent(reply);

}

//POST上传文件 txt
void MyNetworkObject::postFile(QString url,QString filePath){
    QStringList strList;
    //QEventLoop myEvent;
    QString s;

            QHttpMultiPart *multiPart = new QHttpMultiPart(QHttpMultiPart::FormDataType);

            s=filePath;
            strList=s.split('/');
            s=strList.at(strList.count()-1);

            QHttpPart imagePart;
            imagePart.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("text/plain"));
            imagePart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"text\"; filename=\""+s+"\""));

            QFile *file = new QFile(filePath);
            file->open(QIODevice::ReadOnly);
            imagePart.setBodyDevice(file);
            file->setParent(multiPart);
            multiPart->append(imagePart);

            QNetworkRequest request = QNetworkRequest(QUrl(url));
            QNetworkReply *reply= networkAccessManager->post(request, multiPart);
            multiPart->setParent(reply);



}



void MyNetworkObject::finishedSlot(QNetworkReply *reply) {
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
        qDebug()<<"NoError";
        QByteArray buffer = reply->readAll();
        dataStr = QString::fromUtf8(buffer);
        emit requestSuccessSignal(dataStr);
    } else {
        emit requestFailSignal(reply->errorString());
    }
    reply->deleteLater();
}
void MyNetworkObject::printAttribute(QNetworkReply *reply, QNetworkRequest::Attribute code, QString codeStr) {
    QVariant attributeVarient = reply->attribute(code);
    QString result = QString("%1 = %2").arg(codeStr).arg(attributeVarient.toString());
    qDebug()<<"陈帅网络输出   " << result;
}
