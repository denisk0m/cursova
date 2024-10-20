/********************************************************************************
** Form generated from reading UI file 'tablecriterium.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLECRITERIUM_H
#define UI_TABLECRITERIUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TableCriterium
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *tableWidget;
    QLabel *label;

    void setupUi(QDialog *TableCriterium)
    {
        if (TableCriterium->objectName().isEmpty())
            TableCriterium->setObjectName("TableCriterium");
        TableCriterium->resize(771, 457);
        buttonBox = new QDialogButtonBox(TableCriterium);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(220, 400, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        tableWidget = new QTableWidget(TableCriterium);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(70, 130, 641, 192));
        label = new QLabel(TableCriterium);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 90, 431, 20));

        retranslateUi(TableCriterium);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TableCriterium, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TableCriterium, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TableCriterium);
    } // setupUi

    void retranslateUi(QDialog *TableCriterium)
    {
        TableCriterium->setWindowTitle(QCoreApplication::translate("TableCriterium", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TableCriterium", "\342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TableCriterium", "\320\206\320\274'\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TableCriterium", "\320\222\320\260\320\263\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TableCriterium", "\320\241\321\202\321\200\320\270\320\261\320\276\320\272(\320\274)", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("TableCriterium", "\320\221\321\226\320\263(\321\201)", nullptr));
        label->setText(QCoreApplication::translate("TableCriterium", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableCriterium: public Ui_TableCriterium {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLECRITERIUM_H
