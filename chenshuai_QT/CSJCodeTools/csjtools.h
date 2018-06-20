#ifndef CSJTOOLS_H
#define CSJTOOLS_H

#include <QObject>

class CSJTools : public QObject
{
    Q_OBJECT
public:
    explicit CSJTools(QObject *parent = nullptr);

    //保存txt
    void saveTxtFile(QString path,QString content);
    //读取txt
    QString readTxtFile(QString path);

signals:

public slots:
};

#endif // CSJTOOLS_H
