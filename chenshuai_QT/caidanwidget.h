#ifndef CAIDANWIDGET_H
#define CAIDANWIDGET_H


#include <QWidget>
#include <QPushButton>

class caiDanWidget : public QWidget
{
    Q_OBJECT
public:
    explicit caiDanWidget(QWidget *parent = nullptr);

    void didbtnOneEvent();


private:
    QPushButton * btn1;

signals:
    void backToMain();

public slots:
};

#endif // CAIDANWIDGET_H
