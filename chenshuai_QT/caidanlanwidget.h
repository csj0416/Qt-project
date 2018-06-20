#ifndef CAIDANLANWIDGET_H
#define CAIDANLANWIDGET_H

#include <QMainWindow>
#include <QPushButton>
#include <QDialog>

class caiDanLanWidget : public QMainWindow
{
    Q_OBJECT
public:
    explicit caiDanLanWidget(QWidget *parent = nullptr);

    void didbtnOneEvent();

private:
    QPushButton * btn1;
    QDialog dia;

    void creatCaiDanLan();

signals:

    void backToMain();
public slots:
};

#endif // CAIDANLANWIDGET_H
