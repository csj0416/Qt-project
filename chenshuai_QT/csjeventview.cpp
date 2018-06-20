#include "csjeventview.h"
#include "ui_csjeventview.h"
#include <QPushButton>
#include <QDebug>
#include <QCloseEvent>
#include <QMessageBox>
#include <QEvent>

CSJEventView::CSJEventView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CSJEventView)
{
    ui->setupUi(this);

    resize(1024,576);

    QPushButton * btn1 = new QPushButton(this);
    btn1->move(0,0);
    btn1->setFixedSize(160,48);
    btn1->setText("切换到住窗口");
    connect(btn1,&QPushButton::clicked,this,&CSJEventView::backBtnClick);


    this->ui->label->setStyleSheet("QLabel{background-color:rgb(50,50,50);"
                                   "color:white"
                                   "}");





    connect(this->ui->pushButton,&myButton::clicked,
            [=]{
              qDebug()<<"按钮按下";
            });

}

void CSJEventView::backBtnClick(){
    emit backToMain();
}


CSJEventView::~CSJEventView()
{
    delete ui;
}

void CSJEventView::mousePressEvent(QMouseEvent *e)
{
    qDebug() << "+++++++++++++++++++++++";
}

void CSJEventView::closeEvent(QCloseEvent *e)
{
    int ret = QMessageBox::question(this, "提示", "是否需要关闭窗口");
    if(ret == QMessageBox::Yes)
    {
        //关闭窗口
        //处理关闭窗口事件，接收事件，事件就不会再往下传递
        e->accept();
    }
    else
    {
        //不关闭窗口
        //忽略事件，事件继续给父组件传递
        e->ignore();
    }

}
