/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *table_athletesInfo;
    QPushButton *btn_fillInfoFromFile;
    QPushButton *btn_sort;
    QRadioButton *radbut_compareWeight;
    QRadioButton *radbtn_compareJump;
    QPushButton *btn_writeToFile;
    QPushButton *btn_addNode;
    QPushButton *btn_groupByJump;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1036, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        table_athletesInfo = new QTableWidget(centralwidget);
        if (table_athletesInfo->columnCount() < 6)
            table_athletesInfo->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_athletesInfo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_athletesInfo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_athletesInfo->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_athletesInfo->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_athletesInfo->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_athletesInfo->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        table_athletesInfo->setObjectName("table_athletesInfo");
        table_athletesInfo->setGeometry(QRect(50, 290, 761, 192));
        btn_fillInfoFromFile = new QPushButton(centralwidget);
        btn_fillInfoFromFile->setObjectName("btn_fillInfoFromFile");
        btn_fillInfoFromFile->setGeometry(QRect(70, 140, 171, 29));
        btn_sort = new QPushButton(centralwidget);
        btn_sort->setObjectName("btn_sort");
        btn_sort->setGeometry(QRect(70, 90, 83, 29));
        radbut_compareWeight = new QRadioButton(centralwidget);
        radbut_compareWeight->setObjectName("radbut_compareWeight");
        radbut_compareWeight->setGeometry(QRect(80, 250, 161, 26));
        radbtn_compareJump = new QRadioButton(centralwidget);
        radbtn_compareJump->setObjectName("radbtn_compareJump");
        radbtn_compareJump->setGeometry(QRect(80, 220, 171, 26));
        btn_writeToFile = new QPushButton(centralwidget);
        btn_writeToFile->setObjectName("btn_writeToFile");
        btn_writeToFile->setGeometry(QRect(70, 180, 171, 29));
        btn_addNode = new QPushButton(centralwidget);
        btn_addNode->setObjectName("btn_addNode");
        btn_addNode->setGeometry(QRect(410, 80, 83, 29));
        btn_groupByJump = new QPushButton(centralwidget);
        btn_groupByJump->setObjectName("btn_groupByJump");
        btn_groupByJump->setGeometry(QRect(410, 130, 201, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1036, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_athletesInfo->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_athletesInfo->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\243\321\207\320\260\321\201\320\275\320\270\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_athletesInfo->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\260\320\263\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_athletesInfo->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\270\320\261\320\276\320\272 \321\203 \320\262\320\270\321\201\320\276\321\202\321\203", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_athletesInfo->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\320\221\321\226\320\263 100\320\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table_athletesInfo->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\264\320\260\320\273\320\265\320\275\320\275\321\217", nullptr));
        btn_fillInfoFromFile->setText(QCoreApplication::translate("MainWindow", "\320\227\321\207\320\270\321\202\320\260\321\202\320\270 \320\267 \321\204\320\260\320\271\320\273\321\203", nullptr));
        btn_sort->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\321\203\320\262\320\260\321\202\320\270", nullptr));
        radbut_compareWeight->setText(QCoreApplication::translate("MainWindow", "\320\262\320\260\320\263\320\260(\320\267\321\200\320\276\321\201\321\202\320\260\320\275\320\275\321\217)", nullptr));
        radbtn_compareJump->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\270\320\261\320\276\320\272(\321\201\320\277\320\260\320\264\320\260\320\275\320\275\321\217)", nullptr));
        btn_writeToFile->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\320\270 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        btn_addNode->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
        btn_groupByJump->setText(QCoreApplication::translate("MainWindow", "\320\227\320\263\321\200\321\203\320\277\321\203\320\262\320\260\321\202\320\270 \320\267\320\260 \321\201\321\202\321\200\320\270\320\261\320\272\320\276\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
