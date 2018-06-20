#include "caidanwidget.h"

const int buttonPoint[2][2]={
    {80,80},
    {80,160}
};
const int buttonSize[1][2]={
    {160,48}
};

caiDanWidget::caiDanWidget(QWidget *parent) : QWidget(parent)
{

    setWindowTitle("菜单栏");
    resize(1024,576);

    btn1 = new QPushButton(this);
    btn1->move(buttonPoint[0][0],buttonPoint[0][1]);
    btn1->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    btn1->setText("返回");
    connect(btn1,&QPushButton::clicked,this,&caiDanWidget::didbtnOneEvent);
}

void caiDanWidget::didbtnOneEvent(){

    emit backToMain();
}
