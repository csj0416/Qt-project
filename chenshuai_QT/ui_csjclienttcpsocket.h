/********************************************************************************
** Form generated from reading UI file 'csjclienttcpsocket.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSJCLIENTTCPSOCKET_H
#define UI_CSJCLIENTTCPSOCKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSJClientTcpSocket
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditPort;
    QPushButton *buttonConnect;
    QLabel *label_2;
    QLineEdit *lineEditIP;
    QTextEdit *textEditRead;
    QTextEdit *textEditWrite;
    QPushButton *buttonSend;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonClose;

    void setupUi(QWidget *CSJClientTcpSocket)
    {
        if (CSJClientTcpSocket->objectName().isEmpty())
            CSJClientTcpSocket->setObjectName(QStringLiteral("CSJClientTcpSocket"));
        CSJClientTcpSocket->resize(674, 464);
        gridLayout = new QGridLayout(CSJClientTcpSocket);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(CSJClientTcpSocket);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditPort = new QLineEdit(CSJClientTcpSocket);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        gridLayout->addWidget(lineEditPort, 0, 1, 1, 1);

        buttonConnect = new QPushButton(CSJClientTcpSocket);
        buttonConnect->setObjectName(QStringLiteral("buttonConnect"));

        gridLayout->addWidget(buttonConnect, 0, 2, 2, 2);

        label_2 = new QLabel(CSJClientTcpSocket);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditIP = new QLineEdit(CSJClientTcpSocket);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));

        gridLayout->addWidget(lineEditIP, 1, 1, 1, 1);

        textEditRead = new QTextEdit(CSJClientTcpSocket);
        textEditRead->setObjectName(QStringLiteral("textEditRead"));
        textEditRead->setReadOnly(true);

        gridLayout->addWidget(textEditRead, 2, 0, 1, 4);

        textEditWrite = new QTextEdit(CSJClientTcpSocket);
        textEditWrite->setObjectName(QStringLiteral("textEditWrite"));

        gridLayout->addWidget(textEditWrite, 3, 0, 1, 4);

        buttonSend = new QPushButton(CSJClientTcpSocket);
        buttonSend->setObjectName(QStringLiteral("buttonSend"));

        gridLayout->addWidget(buttonSend, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(491, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 1, 1, 2);

        buttonClose = new QPushButton(CSJClientTcpSocket);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));

        gridLayout->addWidget(buttonClose, 4, 3, 1, 1);


        retranslateUi(CSJClientTcpSocket);

        QMetaObject::connectSlotsByName(CSJClientTcpSocket);
    } // setupUi

    void retranslateUi(QWidget *CSJClientTcpSocket)
    {
        CSJClientTcpSocket->setWindowTitle(QApplication::translate("CSJClientTcpSocket", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("CSJClientTcpSocket", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        lineEditPort->setText(QApplication::translate("CSJClientTcpSocket", "8888", Q_NULLPTR));
        buttonConnect->setText(QApplication::translate("CSJClientTcpSocket", "Connect", Q_NULLPTR));
        label_2->setText(QApplication::translate("CSJClientTcpSocket", "\346\234\215\345\212\241\345\231\250IP\357\274\232", Q_NULLPTR));
        lineEditIP->setText(QApplication::translate("CSJClientTcpSocket", "127.0.0.1", Q_NULLPTR));
        buttonSend->setText(QApplication::translate("CSJClientTcpSocket", "Send", Q_NULLPTR));
        buttonClose->setText(QApplication::translate("CSJClientTcpSocket", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CSJClientTcpSocket: public Ui_CSJClientTcpSocket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSJCLIENTTCPSOCKET_H
