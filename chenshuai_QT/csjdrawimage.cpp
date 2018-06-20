#include "csjdrawimage.h"
#include "ui_csjdrawimage.h"
#include <QPushButton>
#include <QPainter>
#include <QPen>
#include <QBrush>
CSJDrawImage::CSJDrawImage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CSJDrawImage)
{
    ui->setupUi(this);

    setWindowTitle("画图");
    resize(1024,576);
    this->ui->pushButton->move(50,50);

     x = 0;

}

CSJDrawImage::~CSJDrawImage()
{
    delete ui;
}
void CSJDrawImage::paintEvent(QPaintEvent *){


    //QPainter p(this);

    QPainter p;//创建画家对象
    p.begin(this);//指定当前窗口为绘图设备

    //绘图操作
    //p.drawxxx();
    //画背景图
    //p.drawPixmap(0, 0, width(), height(), QPixmap("../Image/bk.png"));
    p.drawPixmap(rect(), QPixmap("://image/Frame.jpg"));

    //定义画笔
    QPen pen;
    pen.setWidth(5); //设置线宽
    //pen.setColor(Qt::red); //设置颜色
    pen.setColor( QColor(14, 9, 234) );//rgb设置颜色
    pen.setStyle(Qt::DashLine); //设置风格

    //把画笔交给画家
    p.setPen(pen);

    //画直线
    p.drawLine(50, 50, 150, 50);
    p.drawLine(50, 50, 50, 150);

    //创建画刷对象
    QBrush brush;
    brush.setColor(Qt::red); //设置颜色
    brush.setStyle(Qt::Dense1Pattern);//设置样式

    //把画刷交给画家
    p.setBrush(brush);


    //画矩形
    p.drawRect(150, 150, 100, 50);

    //画圆形
    p.drawEllipse(QPoint(150, 150), 50, 25);

    //画笑脸
    p.drawPixmap(x, 180, 80, 80, QPixmap("://image/up.png"));

    p.end();
}

void CSJDrawImage::on_pushButton_clicked()
{

    emit backToMain();
}

void CSJDrawImage::on_pushButton_2_clicked()
{
    x += 20;
    if(x > width())
    {
        x = 0;
    }

    //刷新窗口，让窗口重绘，整个窗口都刷新
    update(); //间接调用paintEvent()
}
