#ifndef TWOWIDGET_H
#define TWOWIDGET_H

#include <QWidget>
#include <QPushButton>

class twoWidget : public QWidget
{
    Q_OBJECT
public:
    explicit twoWidget(QWidget *parent = nullptr);
    void changMainWindow();

signals:

    void mainWidgerShow();
    void mainWidgerShow(int,QString);



private:
    QPushButton * btn1;
public slots:
};

#endif // TWOWIDGET_H
