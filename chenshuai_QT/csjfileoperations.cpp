#include "csjfileoperations.h"
#include "ui_csjfileoperations.h"
#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <QDebug>
#include <QDateTime>
#include <QDataStream>
#include <QTextStream> //使用它可以指定编码


#include "CSJCodeTools/csjtools.h"

#define NSLog qDebug() << "[" << __FILE__ <<":" << __LINE__ << "]"

CSJFileOperations::CSJFileOperations(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CSJFileOperations)
{
    ui->setupUi(this);
    setWindowTitle("文件操作");
    resize(1024,576);


    //创建文件
    writeData();
    //读取文件
    readData();


    //指定编码格式读取文件
    writeDataTwo();
    readDataTwo();

}

CSJFileOperations::~CSJFileOperations()
{
    delete ui;
}

//读取
void CSJFileOperations::on_pushButton_clicked()
{





    QString path = QFileDialog::getOpenFileName(this,
                "open", "../", "TXT(*.txt)");
    if(path.isEmpty() == false)
    {
        //文件对象
        QFile file(path);

        //打开文件，只读方式
        bool isOk = file.open(QIODevice::ReadOnly);
        if(isOk == true)
        {
#if 0
            //读文件，默认只识别utf8编码
            QByteArray array = file.readAll();
            //显示到编辑区
            //ui->textEdit->setText(QString(array));
            ui->textEdit->setText(array);

            qDebug() << "测试是否输出";
#endif

            QByteArray array;
            while( file.atEnd() == false)
            {
                //读一行
                array += file.readLine();
            }
            ui->textEdit->setText(array);

        }

        //关闭文件
        file.close();

        //获取文件信息
        QFileInfo info(path);
        qDebug() << "文件名字：" << info.fileName().toUtf8().data();
        qDebug() << "文件后缀：" << info.suffix();
        qDebug() << "文件大小：" << info.size();
        qDebug() << "文件创建时间：" <<
         info.created().toString("yyyy-MM-dd hh:mm:ss"); //2016-01-04 15:13:00

    }

}
//写入
void CSJFileOperations::on_pushButton_2_clicked()
{





    QString path = QFileDialog::getSaveFileName(this, "save", "../", "TXT(*.txt)");
    if(path.isEmpty() == false)
    {
        QFile file; //创建文件对象
        //关联文件名字
        file.setFileName(path);

        //打开文件，只写方式
        bool isOk = file.open(QIODevice::WriteOnly);
        if(isOk == true)
        {
            //获取编辑区内容
            QString str = ui->textEdit->toPlainText();
            //写文件
            // QString -> QByteArray
            //file.write(str.toUtf8());

            //QString -> c++ string -> char *
            //file.write(str.toStdString().data());

            //转换为本地平台编码
            file.write(str.toLocal8Bit());


            //QString -> QByteArray
            QString buf = "123";
            QByteArray a = buf.toUtf8(); //中文
            a = buf.toLocal8Bit(); //本地编码

            //QByteArray -> char *
            char *b = a.data();

            //char * -> QString
            char *p = "abc";
            QString c = QString(p);

        }

        file.close();

    }

}


//创建只读文件
void CSJFileOperations::writeData()
{
    //创建文件对象
    QFile file("../test22.txt");

    //打开文件， 只写方式打开
    bool isOk = file.open(QIODevice::WriteOnly);
    if(true == isOk)
    {
        //创建数据流，和file文件关联
        //往数据流中写数据，相当于往文件里写数据
        QDataStream stream(&file);

//        stream << QString("123123") << 25055;

        file.close();

    }else {
        qDebug()<<"创建失败";
    }

}

//读取文件
void CSJFileOperations::readData()
{
    //创建文件对象
    QFile file("../test.txt");

    //打开文件， 只读方式打开
    bool isOk = file.open(QIODevice::ReadOnly);
    if(true == isOk)
    {
        //创建数据流，和file文件关联
        //往数据流中读数据，相当于往文件里读数据
        QDataStream stream(&file);
        //读的时候，按写的顺序取数据
        QString str;
        int a;
        stream >> str >> a;
        //qDebug() << str.toUtf8().data() << a;
        NSLog << str.toUtf8().data() << a << "fdjflkad" <<"chenshuai123";

        file.close();

    }
}


void CSJFileOperations::writeDataTwo()
{
    QFile file;
    file.setFileName("../demo.txt");

    bool isOk = file.open(QIODevice::WriteOnly);
    if(true == isOk)
    {
        QTextStream stream(&file);
        //指定编码
        stream.setCodec("UTF-8");

        stream << QString("主要看气质UTF-8") << 250;

        file.close();
    }
}

void CSJFileOperations::readDataTwo()
{
    QFile file;
    file.setFileName("../demo.txt");

    bool isOk = file.open(QIODevice::ReadOnly);
    if(true == isOk)
    {
        QTextStream stream(&file);
        //指定编码
        stream.setCodec("UTF-8");
        QString str;
        int a;
        stream >> str >> a;

        NSLog <<"发送到发"<< str.toUtf8().data() << a;

        file.close();

    }
}




//返回
void CSJFileOperations::on_pushButton_3_clicked()
{
    emit backToMain();
}

void CSJFileOperations::on_pushButton_4_clicked()
{

    QString path = QFileDialog::getOpenFileName(this,
             "open", "../"  );
    if(false == path.isEmpty())
    {
        QFile file;
        file.setFileName(path);

        bool isOk = file.open(QIODevice::ReadOnly);
        if(true == isOk)
        {
            QTextStream stream(&file);
            //指定编码
//            stream.setCodec("UTF-8");

            //window 平台格式
            stream.setCodec("GB18030");

            QString str = stream.readAll();
            ui->textEdit->setText(str);

            file.close();
        }

    }

}
