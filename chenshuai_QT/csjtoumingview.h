#ifndef CSJTOUMINGVIEW_H
#define CSJTOUMINGVIEW_H

#include <QWidget>

class CSJTouMingView : public QWidget
{
    Q_OBJECT
public:
    explicit CSJTouMingView(QWidget *parent = nullptr);

signals:
    void backToMain();

protected:
    void paintEvent(QPaintEvent *);

    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

private:
    QPoint p;

public slots:
};

#endif // CSJTOUMINGVIEW_H
