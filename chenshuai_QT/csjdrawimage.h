#ifndef CSJDRAWIMAGE_H
#define CSJDRAWIMAGE_H

#include <QWidget>

namespace Ui {
class CSJDrawImage;
}

class CSJDrawImage : public QWidget
{
    Q_OBJECT

public:
    explicit CSJDrawImage(QWidget *parent = 0);
    ~CSJDrawImage();

signals:
    void backToMain();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

protected:
    //重写绘图事件，如果绘图，必须在这个方法中， （窗口重绘的时候调用）
    void paintEvent(QPaintEvent*);

private:
    Ui::CSJDrawImage *ui;
    int x;
};

#endif // CSJDRAWIMAGE_H
