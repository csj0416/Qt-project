#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QPushButton>

class myButton : public QPushButton
{
    Q_OBJECT
public:
    explicit myButton(QWidget *parent = nullptr);

signals:

protected:
    void mousePressEvent(QMouseEvent*);

public slots:
};

#endif // MYBUTTON_H
