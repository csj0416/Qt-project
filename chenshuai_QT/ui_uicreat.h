/********************************************************************************
** Form generated from reading UI file 'uicreat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UICREAT_H
#define UI_UICREAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <smallwidget.h>

QT_BEGIN_NAMESPACE

class Ui_uiCreat
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QPushButton *pushButton_4;
    QWidget *page_3;
    QPushButton *pushButton_12;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCalendarWidget *calendarWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QToolBox *toolBox;
    QWidget *page;
    QPushButton *pushButton_5;
    QWidget *page_4;
    QPushButton *pushButton_9;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_10;
    QWidget *tab_2;
    QPushButton *pushButton_11;
    QFontComboBox *fontComboBox;
    QLineEdit *lineEdit;
    QDial *dial;
    QLabel *labelimg;
    QLabel *labelgif;
    QLabel *labelurl;
    QLCDNumber *lcdNumber;
    QProgressBar *progressBar;
    smallWidget *widget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *uiCreat)
    {
        if (uiCreat->objectName().isEmpty())
            uiCreat->setObjectName(QStringLiteral("uiCreat"));
        uiCreat->resize(961, 682);
        centralwidget = new QWidget(uiCreat);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 150, 69, 22));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 40, 91, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 40, 101, 41));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(310, 20, 151, 81));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 20, 75, 23));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        pushButton_12 = new QPushButton(page_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(0, 20, 75, 23));
        stackedWidget->addWidget(page_3);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 200, 268, 229));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        calendarWidget = new QCalendarWidget(groupBox);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));

        verticalLayout->addWidget(calendarWidget);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(340, 220, 95, 101));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 174, 82));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton_6 = new QPushButton(scrollAreaWidgetContents);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 1, 0, 1, 1);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(560, 30, 141, 81));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 141, 29));
        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 0, 75, 23));
        toolBox->addItem(page, QStringLiteral("Page 1"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 141, 29));
        pushButton_9 = new QPushButton(page_4);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(0, 0, 75, 23));
        toolBox->addItem(page_4, QStringLiteral("Page 2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(320, 370, 127, 80));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(0, 0, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton_11 = new QPushButton(tab_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(0, 0, 75, 23));
        tabWidget->addTab(tab_2, QString());
        fontComboBox = new QFontComboBox(centralwidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(10, 450, 213, 22));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(550, 130, 211, 41));
        dial = new QDial(centralwidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(230, 120, 71, 71));
        labelimg = new QLabel(centralwidget);
        labelimg->setObjectName(QStringLiteral("labelimg"));
        labelimg->setGeometry(QRect(450, 410, 100, 100));
        labelgif = new QLabel(centralwidget);
        labelgif->setObjectName(QStringLiteral("labelgif"));
        labelgif->setGeometry(QRect(590, 390, 171, 91));
        labelurl = new QLabel(centralwidget);
        labelurl->setObjectName(QStringLiteral("labelurl"));
        labelurl->setGeometry(QRect(520, 270, 191, 41));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(800, 300, 91, 51));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(690, 230, 221, 23));
        progressBar->setValue(24);
        widget = new smallWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 520, 301, 51));
        uiCreat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(uiCreat);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 961, 23));
        uiCreat->setMenuBar(menubar);
        statusbar = new QStatusBar(uiCreat);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        uiCreat->setStatusBar(statusbar);

        retranslateUi(uiCreat);

        stackedWidget->setCurrentIndex(1);
        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(uiCreat);
    } // setupUi

    void retranslateUi(QMainWindow *uiCreat)
    {
        uiCreat->setWindowTitle(QApplication::translate("uiCreat", "MainWindow", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("uiCreat", "\346\225\260\346\215\2561", Q_NULLPTR)
         << QApplication::translate("uiCreat", "\346\225\260\346\215\2562", Q_NULLPTR)
         << QApplication::translate("uiCreat", "\346\225\260\346\215\2563", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("uiCreat", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("uiCreat", "\346\211\247\350\241\214", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("uiCreat", "\351\241\265\351\235\2422", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("uiCreat", "\351\241\265\351\235\2421", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("uiCreat", "\346\227\245\346\234\237", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("uiCreat", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("uiCreat", "PushButton", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("uiCreat", "PushButton", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("uiCreat", "PushButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("uiCreat", "11111", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("uiCreat", "Page 1", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("uiCreat", "22222", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("uiCreat", "Page 2", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("uiCreat", "111", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("uiCreat", "Tab 1", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("uiCreat", "222222", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("uiCreat", "Tab 2", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("uiCreat", "chenshuai", Q_NULLPTR));
        labelimg->setText(QApplication::translate("uiCreat", "TextLabel", Q_NULLPTR));
        labelgif->setText(QApplication::translate("uiCreat", "TextLabel", Q_NULLPTR));
        labelurl->setText(QApplication::translate("uiCreat", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class uiCreat: public Ui_uiCreat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UICREAT_H
