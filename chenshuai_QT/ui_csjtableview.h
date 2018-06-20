/********************************************************************************
** Form generated from reading UI file 'csjtableview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSJTABLEVIEW_H
#define UI_CSJTABLEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSJTableView
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *CSJTableView)
    {
        if (CSJTableView->objectName().isEmpty())
            CSJTableView->setObjectName(QStringLiteral("CSJTableView"));
        CSJTableView->resize(708, 451);
        pushButton = new QPushButton(CSJTableView);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 121, 51));

        retranslateUi(CSJTableView);

        QMetaObject::connectSlotsByName(CSJTableView);
    } // setupUi

    void retranslateUi(QWidget *CSJTableView)
    {
        CSJTableView->setWindowTitle(QApplication::translate("CSJTableView", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CSJTableView", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CSJTableView: public Ui_CSJTableView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSJTABLEVIEW_H
