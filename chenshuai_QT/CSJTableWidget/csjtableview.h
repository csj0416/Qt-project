#ifndef CSJTABLEVIEW_H
#define CSJTABLEVIEW_H

#include <QWidget>
#include <QTableWidget>


namespace Ui {
class CSJTableView;
}

class CSJTableView : public QWidget
{
    Q_OBJECT

public:
    explicit CSJTableView(QWidget *parent = 0);
    ~CSJTableView();

    QTableWidget *table;
signals:
    void backToMain();
private slots:
    void on_pushButton_clicked();

private:
    Ui::CSJTableView *ui;
};

#endif // CSJTABLEVIEW_H
