#include "csjtools.h"

#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <QDebug>
#include <QDateTime>
#include <QDataStream>
#include <QTextStream> //使用它可以指定编码

CSJTools::CSJTools(QObject *parent) : QObject(parent)
{

}

void CSJTools::saveTxtFile(QString path,QString content){


    //创建文件对象
    QFile file;
    file.setFileName(path);

    //打开文件， 只写方式打开
    bool isOk = file.open(QIODevice::WriteOnly);
    if(true == isOk)
    {
        QTextStream stream(&file);
        //指定编码
        stream.setCodec("UTF-8");

        stream << QString(content);

        file.close();
    }

    qDebug()<<"baocun";

}

QString CSJTools::readTxtFile(QString path){



    QString retu = "";
    QFile file;
    file.setFileName(path);

    bool isOk = file.open(QIODevice::ReadOnly);
    if(true == isOk)
    {
        QTextStream stream(&file);
        //指定编码
        stream.setCodec("UTF-8");
        QString str;

        stream >> str;

        retu = str;

        file.close();

    }

    return retu;


}
