#ifndef CSJTCPSOCKET_H
#define CSJTCPSOCKET_H

#include <QWidget>
#include <QTcpServer> // 监听套接字
#include <QTcpSocket> // 通信套接字


namespace Ui {
class CSJTcpSocket;
}

class CSJTcpSocket : public QWidget
{
    Q_OBJECT

public:
    explicit CSJTcpSocket(QWidget *parent = 0);
    ~CSJTcpSocket();

signals:
    void backToMain();

private slots:

    void on_buttonClose_clicked();

    void on_buttonSend_clicked();

private:
    Ui::CSJTcpSocket *ui;

    QTcpServer *tcpServer; //监听套接字
    QTcpSocket *tcpSocket; //通信套接字
};

#endif // CSJTCPSOCKET_H
