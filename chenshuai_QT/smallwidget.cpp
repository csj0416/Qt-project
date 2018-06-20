#include "smallwidget.h"

#include <QHBoxLayout> // 水平布局
#include <QDebug>

smallWidget::smallWidget(QWidget *parent) : QWidget(parent)
{

    pin = new QSpinBox(this);
    slider = new QSlider(Qt::Horizontal,this);

    QHBoxLayout * hBoxLayout = new QHBoxLayout(this);
    hBoxLayout->addWidget(pin);
    hBoxLayout->addWidget(slider);


    //关联两个控件之间的数据
    connect(pin,static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged),slider,&QSlider::setValue);
    connect(slider,&QSlider::valueChanged,pin,&QSpinBox::setValue);

    connect(slider,&QSlider::valueChanged,
            [=]{

        emit valueToMainWidget(slider->value());

    });

}
