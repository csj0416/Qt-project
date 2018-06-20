#include "csjnetworktools.h"
#include <QPushButton>
const int buttonPoint[14][2]={
    {80,50},
    {80,130},
    {80,210},
    {80,290},
    {80,370},
    {80,450},

    {300,50},
    {300,130},
    {300,210},
    {300,290},
    {300,370},
    {300,450},

    {520,50},
    {520,130},
};
const int buttonSize[1][2]={
    {160,48}
};

CSJNetworkTools::CSJNetworkTools(QWidget *parent) : QWidget(parent)
{

    networkObj = new MyNetworkObject(); //创建个网络对象
    connect(networkObj,SIGNAL(requestSuccessSignal(QString)),this,SLOT(requestSuccess(QString))); //请求成功信号连接请求成功方法
    connect(networkObj,SIGNAL(requestFailSignal(QString)),this,SLOT(requestFail(QString)));     //失败





    resize(1024,576);
    setWindowTitle("网络请求-2");


    qDebug() << "kaishishisihi123131232131";




    QPushButton * btn3 = new QPushButton(this);
    btn3->setText("返回");
    btn3->move(buttonPoint[0][0],buttonPoint[0][1]);
    btn3->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    btn3->setStyleSheet("QPushButton{color:white;"
                        "background-color:black"
                        "}");


    connect(btn3,&QPushButton::clicked,
            [=](){

        emit backToMain();
    });

    QPushButton * btn4 = new QPushButton(this);
    btn4->setText("发送get请求");
    btn4->move(buttonPoint[1][0],buttonPoint[1][1]);
    btn4->setFixedSize(buttonSize[0][0],buttonSize[0][1]);


    btn4->setStyleSheet("QPushButton{border-image:url(://image/Frame.jpg);}"
                        "QPushButton:hover{border-image:url(://image/down.png);}"
                        "QPushButton:pressed{border-image:url(://image/up.png);}");

    connect(btn4,&QPushButton::clicked,
            [=](){
        QUrl url("http://1.aosik.applinzi.com/demo/api/getUuid.php"); //请求地址
        networkObj->get(url); //发送get请求
    });

    QPushButton * btn5 = new QPushButton(this);
    btn5->setText("发送post请求");
    btn5->move(buttonPoint[2][0],buttonPoint[2][1]);
    btn5->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    connect(btn5,&QPushButton::clicked,
            [=](){
        QString url2 = "http://trans.translift.com.cn:82/transD/app/frmReg.aspx"; //请求地址
        QString parameter = "username=13666666666&password=MTIzNDU2&flag=3";
        networkObj->post(url2,parameter);
    });


    QPushButton * btn6 = new QPushButton(this);
    btn6->setText("上传txt文件");
    btn6->move(buttonPoint[3][0],buttonPoint[3][1]);
    btn6->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    connect(btn6,&QPushButton::clicked,
            [=]{
        QString url3 = "http://trans.translift.com.cn:82/transD/app/frmProjectUPCOPtxt.aspx?orderid=order001"; //请求地址
        QString filePath = "://file/ceshi.txt";
        networkObj->postFile(url3,filePath);
    });



}


void CSJNetworkTools::requestFail(QString str)
{
    qDebug() << "----------requestFail-------------";
    qDebug() << str;

}

void CSJNetworkTools::requestSuccess(QString str)
{
    qDebug() << "----------requestSuccess-------------";
    qDebug() << str;
}
