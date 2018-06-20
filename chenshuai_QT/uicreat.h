#ifndef UICREAT_H
#define UICREAT_H

#include <QMainWindow>

namespace Ui {
class uiCreat;
}

class uiCreat : public QMainWindow
{
    Q_OBJECT

public:
    explicit uiCreat(QWidget *parent = 0);
    ~uiCreat();


signals:
    void backToMain();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::uiCreat *ui;
};

#endif // UICREAT_H
