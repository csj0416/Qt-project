#ifndef CSJFILEOPERATIONS_H
#define CSJFILEOPERATIONS_H

#include <QWidget>

namespace Ui {
class CSJFileOperations;
}

class CSJFileOperations : public QWidget
{
    Q_OBJECT

public:
    explicit CSJFileOperations(QWidget *parent = 0);
    ~CSJFileOperations();

    void writeData();
    void readData();

    //指定编码格式读取文件
    void writeDataTwo();
    void readDataTwo();

signals:
    void backToMain();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::CSJFileOperations *ui;
};

#endif // CSJFILEOPERATIONS_H
