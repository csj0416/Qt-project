#include "myWidget.h"
#include <QApplication>
//#include <QDebug>

int main(int argc, char *argv[])
{
    //创建应用程序类， 应用程序类， 有且只能有一个
    QApplication a(argc, argv);

    //程序窗口图标
//    QString stringPath = QApplication::applicationDirPath();
//    stringPath += "/text.png";
//    a.setWindowIcon(QIcon(stringPath));

//    qDebug()<<"chenshuai  :  " << stringPath;


    //应用程序的第一个窗口
    Widget w;
    w.show();

//    a.exec() 作用： 让应用程序一直执行
    return a.exec();
}
