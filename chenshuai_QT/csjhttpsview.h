#ifndef CSJHTTPSVIEW_H
#define CSJHTTPSVIEW_H

#include <QWidget>

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QHttpMultiPart>


namespace Ui {
class CSJHttpsView;
}

class CSJHttpsView : public QWidget
{
    Q_OBJECT

public:
    explicit CSJHttpsView(QWidget *parent = 0);
    ~CSJHttpsView();

    void NetworkRequest();
    void printAttribute(QNetworkReply *reply, QNetworkRequest::Attribute code, QString codeStr);

signals:
    void backToMain();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void textFinish_slot();

    void finishedSlot(QNetworkReply *reply);


private:
    Ui::CSJHttpsView *ui;

    QNetworkAccessManager *manager;
};

#endif // CSJHTTPSVIEW_H
