#include "csjimageanimation.h"
#include "ui_csjimageanimation.h"
#include <QMouseEvent>
#include <QPainter>
#include <QPixmap>
#include <QBitmap>
#include <QTimer>
#include <QEvent>

csjImageAnimation::csjImageAnimation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::csjImageAnimation)
{
    ui->setupUi(this);
    setWindowTitle("帧动画");
    resize(1024,576);


    pix=new QPixmap();
        pix->load(":/images/p1.png",0,Qt::AvoidDither|Qt::ThresholdDither|Qt::ThresholdAlphaDither);
        resize(pix->size());
        setMask(QBitmap(pix->mask()));
        count=1;
        timer=new QTimer(this);
        timer->start(500);
        connect(timer,SIGNAL(timeout()),this,SLOT(changePicture()));//定时器溢出关联changePicture()函数


//://image/shouzhi_1.png
}


csjImageAnimation::~csjImageAnimation()
{
    delete ui;
}

void csjImageAnimation::on_pushButton_clicked()
{

    emit backToMain();
}




void csjImageAnimation::changePicture()//使用switch语句根据情况选择不同的图片
{
    QString picName;
    count=count+1;
    if(count>5) count=1;
    switch(count)
    {
    case 1:picName="://image/shouzhi_1.png";break;
    case 2:picName="://image/shouzhi_2.png";break;
    case 3:picName="://image/shouzhi_1.png";break;
    case 4:picName="://image/shouzhi_2.png";break;
    case 5:picName="://image/shouzhi_1.png";break;
    default:break;
    }
    pix->load(picName,0,Qt::AvoidDither|Qt::ThresholdDither|Qt::ThresholdAlphaDither);
    resize(pix->size());
    setMask(QBitmap(pix->mask()));//setMask()函数，图片之外透明部分都不显示
    update();	//这句话还是挺重要的，不加和加有很大的区别
}
void csjImageAnimation::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
    if(event->button()==Qt::RightButton)
    {
       close();
    }
}
void csjImageAnimation::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}
void csjImageAnimation::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,*pix);
}

