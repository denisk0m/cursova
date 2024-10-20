#include "tablecriterium.h"
#include "ui_tablecriterium.h"


TableCriterium::TableCriterium(QWidget *parent, double mediumJump,bool isGreater, QVector<Athlete>array)
    : QDialog(parent)
    , ui(new Ui::TableCriterium)
    ,copyArray(array)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(0);
    int rowCount = 0;
    QString toSet = QString("Вибрані елементи які " + QString(isGreater?"Більші":"Менші") + "за середній показник"+ QString::number(mediumJump) + " м");
    ui->label->setText(toSet);
    for(int i = 0; i < array.count(); i++){
        bool condition = (array[i].getJumpHeight() > mediumJump && isGreater) ||
                         (array[i].getJumpHeight() < mediumJump && !isGreater);

        if (condition) {
            ui->tableWidget->insertRow(rowCount);
                    QTableWidgetItem *indexItem = new QTableWidgetItem(QString::number(array[i].getId()));
                    ui->tableWidget->setItem(rowCount,0,indexItem);
                    QTableWidgetItem *nameItem = new QTableWidgetItem(array[i].getName());
                    ui->tableWidget->setItem(rowCount,1,nameItem);
                    QTableWidgetItem *weightItem = new QTableWidgetItem(QString::number(array[i].getWeight()));
                    ui->tableWidget->setItem(rowCount,2,weightItem);
                    QTableWidgetItem * jumpItem= new QTableWidgetItem(QString::number(array[i].getJumpHeight()));
                    ui->tableWidget->setItem(rowCount,3,jumpItem);
                    QTableWidgetItem *runItem = new QTableWidgetItem(QString::number(array[i].getRunTime()));
                    ui->tableWidget->setItem(rowCount,4,runItem);
                    rowCount++;
        }
    }
}

TableCriterium::~TableCriterium()
{
    delete ui;
}
