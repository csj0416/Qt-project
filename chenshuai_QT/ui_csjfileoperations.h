/********************************************************************************
** Form generated from reading UI file 'csjfileoperations.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSJFILEOPERATIONS_H
#define UI_CSJFILEOPERATIONS_H

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

class Ui_CSJFileOperations
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *textEdit;

    void setupUi(QWidget *CSJFileOperations)
    {
        if (CSJFileOperations->objectName().isEmpty())
            CSJFileOperations->setObjectName(QStringLiteral("CSJFileOperations"));
        CSJFileOperations->resize(715, 441);
        gridLayout = new QGridLayout(CSJFileOperations);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(184, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton = new QPushButton(CSJFileOperations);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(100, 38));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(CSJFileOperations);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(100, 38));

        gridLayout->addWidget(pushButton_4, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(CSJFileOperations);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(100, 38));

        gridLayout->addWidget(pushButton_2, 0, 3, 1, 1);

        pushButton_3 = new QPushButton(CSJFileOperations);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(100, 38));

        gridLayout->addWidget(pushButton_3, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(183, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        textEdit = new QTextEdit(CSJFileOperations);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 6);


        retranslateUi(CSJFileOperations);

        QMetaObject::connectSlotsByName(CSJFileOperations);
    } // setupUi

    void retranslateUi(QWidget *CSJFileOperations)
    {
        CSJFileOperations->setWindowTitle(QApplication::translate("CSJFileOperations", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CSJFileOperations", "\350\257\273\345\217\226", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("CSJFileOperations", "\346\214\207\345\256\232\346\240\274\345\274\217\350\257\273\345\217\226", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CSJFileOperations", "\345\206\231\345\205\245", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("CSJFileOperations", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CSJFileOperations: public Ui_CSJFileOperations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSJFILEOPERATIONS_H
