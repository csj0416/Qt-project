#ifndef SMALLWIDGET_H
#define SMALLWIDGET_H

#include <QWidget>
#include <QSpinBox>
#include <QSlider>

class smallWidget : public QWidget
{
    Q_OBJECT
public:
    explicit smallWidget(QWidget *parent = nullptr);


    QSpinBox * pin;
    QSlider * slider;


signals:
    void valueToMainWidget(int);

public slots:
};

#endif // SMALLWIDGET_H
