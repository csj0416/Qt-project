#include "csjtoumingview.h"
#include <QPainter>
#include <QMouseEvent>

CSJTouMingView::CSJTouMingView(QWidget *parent) : QWidget(parent)
{
    //去窗口表框
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());

    //把窗口背景设置为透明
    setAttribute(Qt::WA_TranslucentBackground);

    resize(1024,576);
    setWindowTitle("透明");


}

void CSJTouMingView::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.drawPixmap(0, 0, QPixmap("://image/Sunny.jpg"));
}

void CSJTouMingView::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::RightButton)
    {
        //如果是右键 返回上一级页面
//        close();
        emit backToMain();
    }
    else if(e->button() == Qt::LeftButton)
    {
        //求坐标差值
        //当前点击坐标-窗口左上角坐标
        p = e->globalPos() - this->frameGeometry().topLeft();
    }
}

void CSJTouMingView::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons() & Qt::LeftButton)
    {
       move(e->globalPos() - p);
    }
}
