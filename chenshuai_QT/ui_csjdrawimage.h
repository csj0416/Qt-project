/********************************************************************************
** Form generated from reading UI file 'csjdrawimage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSJDRAWIMAGE_H
#define UI_CSJDRAWIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSJDrawImage
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CSJDrawImage)
    {
        if (CSJDrawImage->objectName().isEmpty())
            CSJDrawImage->setObjectName(QStringLiteral("CSJDrawImage"));
        CSJDrawImage->resize(400, 300);
        pushButton = new QPushButton(CSJDrawImage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 40, 111, 41));
        pushButton_2 = new QPushButton(CSJDrawImage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 40, 121, 41));

        retranslateUi(CSJDrawImage);

        QMetaObject::connectSlotsByName(CSJDrawImage);
    } // setupUi

    void retranslateUi(QWidget *CSJDrawImage)
    {
        CSJDrawImage->setWindowTitle(QApplication::translate("CSJDrawImage", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CSJDrawImage", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CSJDrawImage", "\351\207\215\347\273\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CSJDrawImage: public Ui_CSJDrawImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSJDRAWIMAGE_H
