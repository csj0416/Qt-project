/********************************************************************************
** Form generated from reading UI file 'csjimageanimation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSJIMAGEANIMATION_H
#define UI_CSJIMAGEANIMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_csjImageAnimation
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *csjImageAnimation)
    {
        if (csjImageAnimation->objectName().isEmpty())
            csjImageAnimation->setObjectName(QStringLiteral("csjImageAnimation"));
        csjImageAnimation->resize(400, 300);
        pushButton = new QPushButton(csjImageAnimation);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 101, 41));

        retranslateUi(csjImageAnimation);

        QMetaObject::connectSlotsByName(csjImageAnimation);
    } // setupUi

    void retranslateUi(QWidget *csjImageAnimation)
    {
        csjImageAnimation->setWindowTitle(QApplication::translate("csjImageAnimation", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("csjImageAnimation", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class csjImageAnimation: public Ui_csjImageAnimation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSJIMAGEANIMATION_H
