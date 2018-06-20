#ifndef CSJEVENTVIEW_H
#define CSJEVENTVIEW_H

#include <QWidget>

namespace Ui {
class CSJEventView;
}

class CSJEventView : public QWidget
{
    Q_OBJECT

public:
    explicit CSJEventView(QWidget *parent = 0);
    ~CSJEventView();

    void backBtnClick();

signals:
    void backToMain();

private:
    Ui::CSJEventView *ui;

    //鼠标点击事件
    void mousePressEvent(QMouseEvent *);
    //关闭事件
    void closeEvent(QCloseEvent *);

};

#endif // CSJEVENTVIEW_H
