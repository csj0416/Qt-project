#ifndef CSJCLIENTTCPSOCKET_H
#define CSJCLIENTTCPSOCKET_H

#include <QWidget>
#include <QTcpSocket> //通信套接字

namespace Ui {
class CSJClientTcpSocket;
}

class CSJClientTcpSocket : public QWidget
{
    Q_OBJECT

public:
    explicit CSJClientTcpSocket(QWidget *parent = 0);
    ~CSJClientTcpSocket();

signals:
    void backToMain();

private slots:


    void on_buttonConnect_clicked();

    void on_buttonSend_clicked();

    void on_buttonClose_clicked();

private:
    Ui::CSJClientTcpSocket *ui;

    QTcpSocket *tcpSocket; //通信套接字
};

#endif // CSJCLIENTTCPSOCKET_H
