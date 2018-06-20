#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include "twowidget.h"
#include "caidanlanwidget.h"
#include "uicreat.h"
#include "csjeventview.h"
#include "csjdrawimage.h"
#include "csjtoumingview.h"
#include "csjfileoperations.h"
#include "csjtcpsocket.h"
#include "csjclienttcpsocket.h"
#include "csjimageanimation.h"
#include "csjhttpsview.h" //网络请求
#include "CSJHttpTool/csjnetworktools.h"
#include "CSJTableWidget/csjtableview.h"


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT  //信号与槽的时候需要

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void btnClickEvent();
    void btnPressedEvent();
    void showMainWidget();
    void showCaiDanWidget();
    void showUIView();
    void showEventView();



    QTimer * timer;



    void daicanshu(int,QString);
    void caidanBack();
    void uiCreatBackEmit();
    void eventViewBackEmit();

    //代码块
    void screenJieTu();

private:
    Ui::Widget *ui;
    QPushButton * btnCode;
    twoWidget * widget2;
    caiDanLanWidget * caidan;
    uiCreat * uiView;
    CSJEventView * evView;
    CSJDrawImage * drawImageView;
    CSJTouMingView * touMingView;
    CSJFileOperations * fileOpera;
    CSJTcpSocket * server;
    CSJClientTcpSocket * client;
    csjImageAnimation * imageAnima;
    CSJHttpsView * httpsView;
    CSJNetworkTools * networkTool;
    CSJTableView * tableview;
    int timeID;

    void creatSubView();
    void creatButton();

private slots:
    //陈帅
    void changePictureCSJ();

protected:
    //键盘按下事件
    void keyPressEvent(QKeyEvent *);
    //计时器事件
    void timerEvent(QTimerEvent*);

    //鼠标点击事件
    void mousePressEvent(QMouseEvent *);
    //关闭事件
    void closeEvent(QCloseEvent *);



};

#endif // WIDGET_H
