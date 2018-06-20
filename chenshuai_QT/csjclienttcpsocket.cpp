#include "csjclienttcpsocket.h"
#include "ui_csjclienttcpsocket.h"
#include <QHostAddress>
#include <QDebug>
#include <QDesktopWidget>

CSJClientTcpSocket::CSJClientTcpSocket(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CSJClientTcpSocket)
{
    ui->setupUi(this);
    setWindowTitle("客户端");
     resize(512,320);


     QDesktopWidget *deskWgt = QApplication::desktop();

     if (deskWgt) {

        int winW = deskWgt->width();
        int winH = deskWgt->height();

        int viewX = 0;
        int viewY = 0;
        viewX = (winW - 512 * 2 -80 )/2;
        viewX = winW - viewX - 512;
        viewY = (winH - 320)/2 - 120;


        qDebug()<< winW <<" " << viewX;


        if(viewX >0 && viewY>0){

            move(viewX,viewY);
        }


     }


     tcpSocket = NULL;

     //分配空间，指定父对象
     tcpSocket = new QTcpSocket(this);

     setWindowTitle("客户端");


     connect(tcpSocket, &QTcpSocket::connected,
             [=]()
             {
                 ui->textEditRead->setText("成功和服务器建立好连接");
             }
             );

     connect(tcpSocket, &QTcpSocket::readyRead,
             [=]()
             {
                 //获取对方发送的内容
                 QByteArray array = tcpSocket->readAll();
                 //追加到编辑区中
                 ui->textEditRead->append(array);
             }

             );


}

CSJClientTcpSocket::~CSJClientTcpSocket()
{
    delete ui;
}



void CSJClientTcpSocket::on_buttonConnect_clicked()
{
    //获取服务器ip和端口
    QString ip = ui->lineEditIP->text();
    qint16 port = ui->lineEditPort->text().toInt();

    //主动和服务器建立连接
    tcpSocket->connectToHost(QHostAddress(ip), port);

    qDebug()<<"连接服务器";
}

void CSJClientTcpSocket::on_buttonSend_clicked()
{


    //获取编辑框内容
    QString str = ui->textEditWrite->toPlainText();
    //发送数据
    tcpSocket->write( str.toUtf8().data() );
}

void CSJClientTcpSocket::on_buttonClose_clicked()
{

    //主动和对方断开连接
    tcpSocket->disconnectFromHost();
    tcpSocket->close();

    this->ui->textEditRead->setText("");
    this->ui->textEditWrite->setText("");

    emit backToMain();

}
