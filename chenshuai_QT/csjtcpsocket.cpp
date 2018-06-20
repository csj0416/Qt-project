#include "csjtcpsocket.h"
#include "ui_csjtcpsocket.h"
#include <QDesktopWidget>
#include <QDebug>

CSJTcpSocket::CSJTcpSocket(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CSJTcpSocket)
{
    ui->setupUi(this);
    setWindowTitle("服务端");
    resize(512,320);

    QDesktopWidget *deskWgt = QApplication::desktop();

    if (deskWgt) {

       int winW = deskWgt->width();
       int winH = deskWgt->height();

       int viewX = 0;
       int viewY = 0;
       viewX = (winW - 512 * 2 -80 )/2;
       viewY = (winH - 320)/2 - 120;

       qDebug()<< winW <<" " << viewX;


       if(viewX >0 && viewY>0){

           move(viewX,viewY);
       }


    }





    tcpServer = NULL;
    tcpSocket = NULL;

    //监听套接字，指定父对象，让其自动回收空间
    tcpServer = new QTcpServer(this);

    tcpServer->listen(QHostAddress::Any, 8888);

    setWindowTitle("服务器: 8888");

    connect(tcpServer, &QTcpServer::newConnection,
            [=]()
            {
                //取出建立好连接的套接字
                tcpSocket = tcpServer->nextPendingConnection();

                //获取对方的IP和端口
                QString ip = tcpSocket->peerAddress().toString();
                qint16 port = tcpSocket->peerPort();
                QString temp = QString("[%1:%2]:成功连接").arg(ip).arg(port);

                ui->textEditRead->setText(temp);

                connect(tcpSocket, &QTcpSocket::readyRead,
                        [=]()
                        {
                            //从通信套接字中取出内容
                            QByteArray array = tcpSocket->readAll();
                            ui->textEditRead->append(array);
                        }

                        );


            }

            );
}

CSJTcpSocket::~CSJTcpSocket()
{
    delete ui;
}





void CSJTcpSocket::on_buttonClose_clicked()
{


    if(NULL == tcpSocket)
    {
        return;
    }

    //主动和客户端端口断开连接
    tcpSocket->disconnectFromHost();
    tcpSocket->close();
    tcpSocket = NULL;


    this->ui->textEditRead->setText("");
    this->ui->textEditWrite->setText("");

    emit backToMain();
}

void CSJTcpSocket::on_buttonSend_clicked()
{

    if(NULL == tcpSocket)
    {
        return;
    }
    //获取编辑区内容
    QString str = ui->textEditWrite->toPlainText();
    //给对方发送数据， 使用套接字是tcpSocket
    tcpSocket->write( str.toUtf8().data() );

}
