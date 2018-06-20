/********************************************************************************
** Form generated from reading UI file 'csjtcpsocket.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSJTCPSOCKET_H
#define UI_CSJTCPSOCKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSJTcpSocket
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEditRead;
    QTextEdit *textEditWrite;
    QPushButton *buttonSend;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonClose;

    void setupUi(QWidget *CSJTcpSocket)
    {
        if (CSJTcpSocket->objectName().isEmpty())
            CSJTcpSocket->setObjectName(QStringLiteral("CSJTcpSocket"));
        CSJTcpSocket->resize(663, 473);
        gridLayout = new QGridLayout(CSJTcpSocket);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEditRead = new QTextEdit(CSJTcpSocket);
        textEditRead->setObjectName(QStringLiteral("textEditRead"));
        textEditRead->setReadOnly(true);

        gridLayout->addWidget(textEditRead, 0, 0, 1, 3);

        textEditWrite = new QTextEdit(CSJTcpSocket);
        textEditWrite->setObjectName(QStringLiteral("textEditWrite"));

        gridLayout->addWidget(textEditWrite, 1, 0, 1, 3);

        buttonSend = new QPushButton(CSJTcpSocket);
        buttonSend->setObjectName(QStringLiteral("buttonSend"));

        gridLayout->addWidget(buttonSend, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(480, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        buttonClose = new QPushButton(CSJTcpSocket);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));

        gridLayout->addWidget(buttonClose, 2, 2, 1, 1);


        retranslateUi(CSJTcpSocket);

        QMetaObject::connectSlotsByName(CSJTcpSocket);
    } // setupUi

    void retranslateUi(QWidget *CSJTcpSocket)
    {
        CSJTcpSocket->setWindowTitle(QApplication::translate("CSJTcpSocket", "Form", Q_NULLPTR));
        buttonSend->setText(QApplication::translate("CSJTcpSocket", "Send", Q_NULLPTR));
        buttonClose->setText(QApplication::translate("CSJTcpSocket", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CSJTcpSocket: public Ui_CSJTcpSocket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSJTCPSOCKET_H
