/********************************************************************************
** Form generated from reading UI file 'csjeventview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSJEVENTVIEW_H
#define UI_CSJEVENTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include <mybutton.h>
#include <mylabel.h>

QT_BEGIN_NAMESPACE

class Ui_CSJEventView
{
public:
    myLabel *label;
    myButton *pushButton;

    void setupUi(QWidget *CSJEventView)
    {
        if (CSJEventView->objectName().isEmpty())
            CSJEventView->setObjectName(QStringLiteral("CSJEventView"));
        CSJEventView->resize(874, 514);
        label = new myLabel(CSJEventView);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 90, 321, 191));
        pushButton = new myButton(CSJEventView);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 360, 111, 41));

        retranslateUi(CSJEventView);

        QMetaObject::connectSlotsByName(CSJEventView);
    } // setupUi

    void retranslateUi(QWidget *CSJEventView)
    {
        CSJEventView->setWindowTitle(QApplication::translate("CSJEventView", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("CSJEventView", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CSJEventView", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CSJEventView: public Ui_CSJEventView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSJEVENTVIEW_H
