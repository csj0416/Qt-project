#include "uicreat.h"
#include "ui_uicreat.h"
#include <QCompleter>
#include <QMovie>
#include <QtDebug>
uiCreat::uiCreat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::uiCreat)
{
    ui->setupUi(this);

    //设置文字左边间隔
    this->ui->lineEdit->setTextMargins(5,0,0,0);

    //设置显示方式
//    this->ui->lineEdit->setEchoMode(QLineEdit::Password);

    QStringList list;
    list<<"hell" <<"Hehe"<<"hofkdj";
    QCompleter * com = new QCompleter(list,this);
    com->setCaseSensitivity(Qt::CaseInsensitive);
    this->ui->lineEdit->setCompleter(com);

    //给label 设置图片
    this->ui->labelimg->setPixmap(QPixmap("://image/up.png"));
    //设置图片自适应
    this->ui->labelimg->setScaledContents(true);




    //给label 设置gif 动画图片
    //1,创建动画
    QMovie * myMove = new QMovie("://image/mario.gif");
    //将动画添加到label
    this->ui->labelgif->setMovie(myMove);
    this->ui->labelgif->setScaledContents(true);
    myMove->start();


    //为label 设置 html
    this->ui->labelurl->setText("<h1><a href=\"https://www.baidu.com\">百度一下</a></h1>");
    this->ui->labelurl->setOpenExternalLinks(true);

    //设置数码管
    this->ui->lcdNumber->display(1024);

    //设置进度条
    this->ui->progressBar->setMinimum(0);//最小值
    this->ui->progressBar->setMaximum(200);//最大值
    this->ui->progressBar->setValue(100);//当前值




    connect(this->ui->widget,&smallWidget::valueToMainWidget,
            [=](int value){

        qDebug()<<"shujucsj_123 : " << value;

    });

}

uiCreat::~uiCreat()
{
    delete ui;
}

void uiCreat::on_pushButton_clicked()
{

    emit backToMain();
}

void uiCreat::on_pushButton_2_clicked()
{

    static int i = 0;
    i = ++i % 2;
    ui->stackedWidget->setCurrentIndex(i);
}
