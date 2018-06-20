#include "caidanlanwidget.h"
#include <QMenuBar>
#include <QMenu>
#include <QDebug>
#include <QToolBar>
#include <QPushButton>
#include <QStatusBar>
#include <QLabel>
#include <QTextEdit>
#include <QDockWidget>
#include <QDialog>
#include <QMessageBox>
#include <QFileDialog>

const int buttonPoint[2][2]={
    {80,80},
    {80,160}
};
const int buttonSize[1][2]={
    {160,48}
};

caiDanLanWidget::caiDanLanWidget(QWidget *parent) : QMainWindow(parent)
{

    setWindowTitle("菜单栏");
    resize(1024,576);





    btn1 = new QPushButton(this);
    btn1->move(buttonPoint[0][0],buttonPoint[0][1]);
    btn1->setFixedSize(buttonSize[0][0],buttonSize[0][1]);
    btn1->setText("返回");
    connect(btn1,&QPushButton::clicked,this,&caiDanLanWidget::didbtnOneEvent);

    //创建菜单栏
    creatCaiDanLan();

}


void caiDanLanWidget::didbtnOneEvent(){

    emit backToMain();
}
void caiDanLanWidget::creatCaiDanLan(){


    //菜单栏
    QMenuBar * menBar = menuBar();

    //添加菜单
    QMenu * Menu1 = menBar->addMenu("文件");

    //添加菜单项
    QAction * action1 = Menu1->addAction("新建");
    Menu1->addSeparator(); //添加分割线

    QAction * action2 = Menu1->addAction("模态对话框");
    QAction * action3 = Menu1->addAction("非模态对话框");

    connect(action2,&QAction::triggered,
            [=]{


        QDialog dia;
        dia.exec();
        qDebug()<<"模态对话框";

    });
    connect(action3,&QAction::triggered,
            [=]{


        dia.show();
        qDebug()<<"非模态对话框";

    });



    connect(action1,&QAction::triggered,
            [=]{

        qDebug()<<"新建文件";

    });

    QAction * action4 = Menu1->addAction("关于对话框");
    connect(action4,&QAction::triggered,
            [=]{



        QMessageBox::about(this,"about","关于Qtsdfasdfasdfjaldjf;adfla");

        qDebug()<<"关于对话框";

    });

    QAction * action5 = Menu1->addAction("问题对话框");
    connect(action5,&QAction::triggered,
            [=]{


        int ret = QMessageBox::question(this,"question","是否确定",
                                        QMessageBox::Ok|QMessageBox::Cancel);

        switch (ret) {
        case QMessageBox::Ok:
            qDebug()<<"确定";
            break;
        case QMessageBox::Cancel:
             qDebug()<<"取消";
            break;
        default:
            break;
        }
        qDebug()<<"问题对话框";

    });

    QAction * action6 = Menu1->addAction("文件对话框");
    connect(action6,&QAction::triggered,
            [=]{
        // "../" 表示: 上一级目录

        //文件对话框
        QString path = QFileDialog::getOpenFileName(this,
                                                    "open",
                                                    "../",
                                                    "souce(*.cpp *.h);;Text123(*.txt);;all(*.*)");
        qDebug()<<path;



        qDebug()<<"文件对话框";

    });
    //工具栏 菜单项的快捷 方式

    QToolBar * toolBar = addToolBar("toolBar");
    toolBar->addAction(action1);

    QPushButton * btn2 = new QPushButton(this);
    btn2->setText("返回");
    connect(btn2,&QPushButton::clicked,
            [=]{

//        btn2->setText("按钮123");
        didbtnOneEvent();
    });

    toolBar->addWidget(btn2);

    //状态栏
    QStatusBar * statuBar = statusBar();

    QLabel * label = new QLabel(this);
    label->setText("Normal txt file");
    statuBar->addWidget(label);

    //从右往左添加
    statuBar->addPermanentWidget(new QLabel("txt    ",this));

    //核心控件
    QTextEdit * edit = new QTextEdit(this);
    setCentralWidget(edit);

    //浮动窗口
    QDockWidget * dock = new QDockWidget(this);
    addDockWidget(Qt::RightDockWidgetArea,dock);

    QTextEdit * edit2 = new QTextEdit(this);
    dock->setWidget(edit2);


}
