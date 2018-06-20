#include "myWidget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QKeyEvent>
#include <QCloseEvent>
#include <QMessageBox>
#include <QEvent>
#include <QTimer>

#include <QString>
#include <QScreen>

#include <QDesktopWidget>
#include <QPropertyAnimation>


#define cout qDebug() << "[" << __FILE__ <<":" << __LINE__ << "]"

//const int usrButtonTab[5][2]={
//    {255,360},
//    {255,480},
//    {255,600},
//    {255,720},
//    {255,840}
//};

const int buttonPoint[15][2]={
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
    {520,210},
};
const int buttonSize[1][2]={
    {160,48}
};

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //设置窗口信息
    //窗口大小
    resize(1024,576);
    //窗口标题
    setWindowTitle("尘世间");



    qDebug()<<"标识符 ‘%’作用： 求余数"<< 4%2 << "  " << 5%2;


    QString  str = "";

    //isEmpty() 判断字符串是空返回 YES ，否则返回 NO
    if(str.isEmpty()){

        qDebug()<<"flsdjfkla-yes";
    }else {
        qDebug()<<"flsdjfkla-no";
    }


    QString  str1 = "chenshuai";

    if(str1.isEmpty()){

        qDebug()<<"flsdjfkla1-yes";
    }else {
        qDebug()<<"flsdjfkla1-no";
    }



    //创建按钮
    creatButton();

    //创建子窗口
    creatSubView();

//    timeID = this->startTimer(1000);

    //陈帅
    timer=new QTimer(this);
    timer->setInterval(300);


    connect(timer,SIGNAL(timeout()),this,SLOT(changePictureCSJ()));//定时器溢出关联changePicture()函数








}

void Widget::changePictureCSJ(){

    qDebug()<<"chenshuai123123123";

}

//创建按钮
void Widget::creatButton(){



    //move 设置按钮位置
    this->ui->pushButton->move(buttonPoint[0][0],buttonPoint[0][1]);
    //setFixedSize 设置按钮大小
    this->ui->pushButton->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    this->ui->pushButton->setText("切换到子窗口");
    //设置控件样式
    this->ui->pushButton->setStyleSheet("QPushButton{color:red}");





    btnCode = new QPushButton(this);
    btnCode->setText("代码创建");
    btnCode->move(buttonPoint[1][0],buttonPoint[1][1]);
    btnCode->setFixedSize(buttonSize[0][0],buttonSize[0][1]);

    //设置控件样式
    btnCode->setStyleSheet("QPushButton{color:rgb(130,130,130)}");


    //qt 中按钮点击事件是由信号和槽实现，
    /*
     * 参数1， 谁发出的。                      信号发出者
     * 参数2， 触发事件的类型，（点击或者按下），   发出信号的名字
     * 参数3， 谁来接收并处理，                 信号接受者
     * 参数4， 怎么处理，                      信号处理函数
     * 注意： 参数都是指针
     */

    //按下
    connect(btnCode,&QPushButton::pressed,this,&Widget::btnPressedEvent);

    //点击
    connect(this->ui->pushButton,&QPushButton::clicked,this,&Widget::btnClickEvent);


    QPushButton * btn2 = new QPushButton(this);
    btn2->setText("按钮2");
    btn2->move(buttonPoint[2][0],buttonPoint[2][1]);
    btn2->setFixedSize(buttonSize[0][0],buttonSize[0][1]);

    //C++11 的用法
    connect(btn2,&QPushButton::clicked,
            //= 相当于： 把外部所有局部变量， 类中所有成员，以值传递的方式复制进来  mutable: 表示可被修改
            [=]() mutable {

            btn2->setText("123123");
            qDebug()<<"11111111";
    });

    QPushButton * btn3 = new QPushButton(this);
    btn3->setText("菜单栏");
    btn3->move(buttonPoint[3][0],buttonPoint[3][1]);
    btn3->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    btn3->setStyleSheet("QPushButton{color:white;"
                        "background-color:black"
                        "}");


    connect(btn3,&QPushButton::clicked,this,&Widget::showCaiDanWidget);

    QPushButton * btn4 = new QPushButton(this);
    btn4->setText("创建UI");
    btn4->move(buttonPoint[4][0],buttonPoint[4][1]);
    btn4->setFixedSize(buttonSize[0][0],buttonSize[0][1]);


    btn4->setStyleSheet("QPushButton{border-image:url(://image/Frame.jpg);}"
                        "QPushButton:hover{border-image:url(://image/down.png);}"
                        "QPushButton:pressed{border-image:url(://image/up.png);}");

    connect(btn4,&QPushButton::clicked,this,&Widget::showUIView);

    QPushButton * btn5 = new QPushButton(this);
    btn5->setText("捕捉鼠标");
    btn5->move(buttonPoint[5][0],buttonPoint[5][1]);
    btn5->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    connect(btn5,&QPushButton::clicked,this,&Widget::showEventView);


    QPushButton * btn6 = new QPushButton(this);
    btn6->setText("画图");
    btn6->move(buttonPoint[6][0],buttonPoint[6][1]);
    btn6->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    connect(btn6,&QPushButton::clicked,
            [=]{

        this->hide();
        drawImageView->show();
    });


    QPushButton * btn7 = new QPushButton(this);
    btn7->setText("透明窗口");
    btn7->move(buttonPoint[7][0],buttonPoint[7][1]);
    btn7->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    connect(btn7,&QPushButton::clicked,
            [=]{

        this->hide();
        touMingView->show();
    });


    QPushButton * btn8 = new QPushButton(this);
    btn8->setText("文件操作");
    btn8->move(buttonPoint[8][0],buttonPoint[8][1]);
    btn8->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    connect(btn8,&QPushButton::clicked,
            [=]{

        this->hide();
        fileOpera->show();
    });

    QPushButton * btn9 = new QPushButton(this);
    btn9->setText("Qt-TCP");
    btn9->move(buttonPoint[9][0],buttonPoint[9][1]);
    btn9->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    connect(btn9,&QPushButton::clicked,
            [=](){

        this->hide();




        server->show();
        client->show();
    });


    QPushButton * btn10 = new QPushButton(this);
    btn10->setText("帧动画-待续");
    btn10->move(buttonPoint[10][0],buttonPoint[10][1]);
    btn10->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    connect(btn10,&QPushButton::clicked,
            [=](){

//        this->timer->start();
//        imageAnima->show();
//        this->hide();
    });


    QPushButton * btn11 = new QPushButton(this);
    btn11->setText("网络请求");
    btn11->move(buttonPoint[11][0],buttonPoint[11][1]);
    btn11->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    connect(btn11,&QPushButton::clicked,
            [=](){


        httpsView->show();
        this->hide();

    });


    QPushButton * btn12 = new QPushButton(this);
    btn12->setText("屏幕操作");
    btn12->move(buttonPoint[12][0],buttonPoint[12][1]);
    btn12->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    connect(btn12,&QPushButton::clicked,
            [=](){


        //截取屏幕
       screenJieTu();

    });

    QPushButton * btn13 = new QPushButton(this);
    btn13->setText("网络请求-2");
    btn13->move(buttonPoint[13][0],buttonPoint[13][1]);
    btn13->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    connect(btn13,&QPushButton::clicked,
            [=](){


        this->hide();
        networkTool->show();


    });

    QPushButton * btn14 = new QPushButton(this);
    btn14->setText("TableView");
    btn14->move(buttonPoint[14][0],buttonPoint[14][1]);
    btn14->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    connect(btn14,&QPushButton::clicked,
            [=](){


        this->hide();
        tableview->show();


    });





}
//屏幕截图
void Widget::screenJieTu(){

    //方法1
//      QScreen *screen = QGuiApplication::primaryScreen();
//         QString filePathName = "full-";
//         filePathName += QDateTime::currentDateTime().toString("yyyy-MM-dd hh-mm-ss-zzz");
//         filePathName += "+ chenshuai.jpg";
//         if(!screen->grabWindow(0).save("../screen/"+filePathName, "jpg"))
//         {
//             cout<<"save full screen failed"<<endl;
//         }else{
//             cout<<"Save full screen success";
//         }


         //方法2
    QString fileName;

      QPixmap pix, bmp;


      QDesktopWidget * deskwgt = QApplication::desktop();
      int winW = deskwgt->width();
      int winH = deskwgt->height();


        pix =bmp.grabWindow(QApplication::desktop()->winId(),0,0,winW,winH);

        fileName= QDateTime::currentDateTime().toString("yyyy-MM-ddHH-mm-ss")  + "chenshuai123123.bmp";//通过时间命名文件

        if (pix.isNull())

        {

            QMessageBox::information(this, "Error", "截屏失败 !", QMessageBox::Ok);



        }

        else

        {

            if(!pix.save("../screen/"+fileName,"BMP"))

            {

                QMessageBox::information(this, "Right", "保存错误 !", QMessageBox::Ok);



            }

            else

            {

                QMessageBox::information(this, "Grab", "保存成功!",QMessageBox::Ok);



            }

        }

}
//创建鼠标捕捉子窗口
void Widget::showEventView(){

    evView->show();
    this->hide();

}

//创建UI子窗口
void Widget::showUIView(){

    uiView->show();
    this->hide();

}

//创建子窗口
void Widget::creatSubView(){

    widget2 = new twoWidget();
    //接收子窗口发出的信号
    void (twoWidget::*wucanshu)() = &twoWidget::mainWidgerShow;
    connect(widget2,wucanshu,this,&Widget::showMainWidget);

    void (twoWidget::*youcanshu)(int,QString) = &twoWidget::mainWidgerShow;
    connect(widget2,youcanshu,this,&Widget::daicanshu);

    caidan = new caiDanLanWidget();
    connect(caidan,&caiDanLanWidget::backToMain,this,&Widget::caidanBack);

    uiView = new uiCreat();
    connect(uiView,&uiCreat::backToMain,this,&Widget::uiCreatBackEmit);

    evView = new CSJEventView();
//    connect(evView,&CSJEventView::backToMain,this &Widget::eventViewBackEmit);
    connect(evView,&CSJEventView::backToMain,this,&Widget::eventViewBackEmit);

   drawImageView = new CSJDrawImage();
   connect(drawImageView,&CSJDrawImage::backToMain,
            [=]{

        drawImageView->hide();
        this->show();
    });

    touMingView = new CSJTouMingView();
    connect(touMingView,&CSJTouMingView::backToMain,
             [=]{

         touMingView->hide();
         this->show();
     });

    fileOpera = new CSJFileOperations();
    connect(fileOpera,&CSJFileOperations::backToMain,
             [=]{

         fileOpera->hide();
         this->show();
     });



    server = new CSJTcpSocket();

    connect(server,&CSJTcpSocket::backToMain,
            [=]{

        server->hide();
        client->hide();
        this->show();

    });

    client = new CSJClientTcpSocket();

    connect(client,&CSJClientTcpSocket::backToMain,
            [=]{

        server->hide();
        client->hide();
        this->show();

    });

    imageAnima = new csjImageAnimation();

    connect(imageAnima,&csjImageAnimation::backToMain,
            [=](){
        imageAnima->hide();
        this->show();
    });


    httpsView = new CSJHttpsView();
    connect(httpsView,&CSJHttpsView::backToMain,
            [=](){
        httpsView->hide();
        this->show();
    });

    networkTool = new CSJNetworkTools();
    connect(networkTool,&CSJNetworkTools::backToMain,
            [=](){
        networkTool->hide();
        this->show();
    });

    tableview = new CSJTableView();

    connect(tableview,&CSJTableView::backToMain,
            [=](){
        tableview->hide();
        this->show();
    });
}

//隐藏鼠标捕捉子窗口
void Widget::eventViewBackEmit(){
    this->show();
    evView->hide();
}


//隐藏菜单View
void Widget::caidanBack(){

    caidan->hide();
    this->show();

}
//隐藏uiView
void Widget::uiCreatBackEmit(){

    uiView->hide();
    this->show();

}

void Widget::showCaiDanWidget(){

    caidan->show();
    this->hide();

}

void Widget::btnPressedEvent(){

    btnCode->setText("btn1按下");
}

void Widget::btnClickEvent(){


    widget2->show();
    this->hide();

}
void Widget::daicanshu(int number, QString str){

    qDebug()<< number << str;
}
void Widget::showMainWidget(){
    this->show();
    widget2->hide();

}

Widget::~Widget()
{
    delete ui;
}

//键盘按下时间
void Widget::keyPressEvent(QKeyEvent *even){


    qDebug()<< (char)even->key();
    if(even->key() == Qt::Key_A){

        qDebug()<< "Qt::Key_A";
    }

}
//定时器事件
void Widget::timerEvent(QTimerEvent *time){

    if(time->timerId() == this->timeID){

        static int number = 0;
        number++;
        qDebug()<< "定时器时间： " << number;

        if(number == 3 ){
            //停止定时器
            this->killTimer(this->timeID);
            qDebug()<< "定时器停止";
        }
    }

}


void Widget::mousePressEvent(QMouseEvent *e)
{
    qDebug() << "+++++++++++++++++++++++";
}

void Widget::closeEvent(QCloseEvent *e)
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

//总结:

/*
 * 将A设置为B 的父对象
 * b.setParent(&a); //指定父对象
 *
 * 设置父对象方法2：
 * QPushButton b(&a);
 *
*/
