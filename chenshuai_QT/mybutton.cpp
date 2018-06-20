#include "mybutton.h"
#include <QMouseEvent>
#include <QDebug>

myButton::myButton(QWidget *parent) : QPushButton(parent)
{

}
void myButton::mousePressEvent(QMouseEvent *e){

    if(e->button() == Qt::LeftButton){

        qDebug()<<"按下的是左键";

    }else {

    }

    QPushButton::mousePressEvent(e);



}
