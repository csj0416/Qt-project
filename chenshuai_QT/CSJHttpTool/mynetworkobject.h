#ifndef MYNETWORKOBJECT_H
#define MYNETWORKOBJECT_H
#include <QObject>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDebug>
#include <QImageReader>
#include <QHttpMultiPart>
#include <QFile>
#include <QtNetwork>


class MyNetworkObject : public QObject
{
    Q_OBJECT
public:
    explicit MyNetworkObject(QObject *parent = 0);
    void get(QUrl url); //GET请求
    void post(QString url,QString parameter); //POST请求
    void postFile(QString url,QString filePath);//POST上传文件 txt
    void printAttribute(QNetworkReply *reply, QNetworkRequest::Attribute code, QString codeStr);
    QString dataStr;
public slots:
    void finishedSlot(QNetworkReply *reply);
signals:
    void requestFailSignal(QString str); //请求失败时，发送这个信号
    void requestSuccessSignal(QString str); //请求成功时，发送这个信号

private:
    QNetworkAccessManager *networkAccessManager;

    QNetworkAccessManager *manager;
};
#endif // MYNETWORKOBJECT_H
