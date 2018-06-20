/********************************************************************************
** Form generated from reading UI file 'csjhttpsview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSJHTTPSVIEW_H
#define UI_CSJHTTPSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSJHttpsView
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CSJHttpsView)
    {
        if (CSJHttpsView->objectName().isEmpty())
            CSJHttpsView->setObjectName(QStringLiteral("CSJHttpsView"));
        CSJHttpsView->resize(695, 438);
        pushButton = new QPushButton(CSJHttpsView);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 60, 111, 41));
        pushButton_2 = new QPushButton(CSJHttpsView);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 110, 111, 41));

        retranslateUi(CSJHttpsView);

        QMetaObject::connectSlotsByName(CSJHttpsView);
    } // setupUi

    void retranslateUi(QWidget *CSJHttpsView)
    {
        CSJHttpsView->setWindowTitle(QApplication::translate("CSJHttpsView", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CSJHttpsView", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CSJHttpsView", "\344\270\212\344\274\240", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CSJHttpsView: public Ui_CSJHttpsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSJHTTPSVIEW_H
