#ifndef CSJNETWORKTOOLS_H
#define CSJNETWORKTOOLS_H

#include <QWidget>
#include "mynetworkobject.h"

class CSJNetworkTools : public QWidget
{
    Q_OBJECT
public:
    explicit CSJNetworkTools(QWidget *parent = nullptr);

    MyNetworkObject *networkObj;


signals:
    void backToMain();

public slots:

    void requestFail(QString str); //发送“失败信号”时，触发该方法
    void requestSuccess(QString str);//发送“成功信号”时，触发该方法

};

#endif // CSJNETWORKTOOLS_H
