#ifndef CSJIMAGEANIMATION_H
#define CSJIMAGEANIMATION_H

#include <QPixmap>
#include <QWidget>

namespace Ui {
class csjImageAnimation;
}

class csjImageAnimation : public QWidget
{
    Q_OBJECT

public:
    explicit csjImageAnimation(QWidget *parent = 0);
    ~csjImageAnimation();

    QPixmap * pix;
    QTimer * timer;
    int count;
    QPoint  dragPosition;

    void changePicture();

    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);


    QTime * dfjl;


signals:
    void backToMain();
private slots:
    void on_pushButton_clicked();

private:
    Ui::csjImageAnimation *ui;

protected:
    //重写绘图事件，如果绘图，必须在这个方法中， （窗口重绘的时候调用）
    void paintEvent(QPaintEvent*);
};

#endif // CSJIMAGEANIMATION_H
