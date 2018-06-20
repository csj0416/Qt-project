/********************************************************************************
** Form generated from reading UI file 'eventview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTVIEW_H
#define UI_EVENTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include <mylabel.h>

QT_BEGIN_NAMESPACE

class Ui_EventViewShuBiao
{
public:
    QHBoxLayout *horizontalLayout;
    myLabel *label;

    void setupUi(QWidget *EventViewShuBiao)
    {
        if (EventViewShuBiao->objectName().isEmpty())
            EventViewShuBiao->setObjectName(QStringLiteral("EventViewShuBiao"));
        EventViewShuBiao->resize(400, 300);
        horizontalLayout = new QHBoxLayout(EventViewShuBiao);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new myLabel(EventViewShuBiao);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


        retranslateUi(EventViewShuBiao);

        QMetaObject::connectSlotsByName(EventViewShuBiao);
    } // setupUi

    void retranslateUi(QWidget *EventViewShuBiao)
    {
        EventViewShuBiao->setWindowTitle(QApplication::translate("EventViewShuBiao", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("EventViewShuBiao", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EventViewShuBiao: public Ui_EventViewShuBiao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTVIEW_H
