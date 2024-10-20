#include "addnode.h"
#include <QDebug>
#include "ui_addnode.h"

AddNode::AddNode(QWidget *parent, QVector<Athlete> & athletes)
    : QDialog(parent)
    , ui(new Ui::addNode),
    arrayToAdd(athletes)
{
    qDebug()<<"ptr of athletes in constructor : "<<&athletes;
    qDebug()<<"ptr addToArray in constructor : "<<&arrayToAdd;


    ui->setupUi(this);
}

AddNode::~AddNode()
{
    delete ui;
}

void AddNode::on_buttonBox_accepted()
{
    // qDebug()<<"ptr in func : "<<&arrayToAdd;
    QString name = ui->lineEdit_name->text();
    double jumpHeight = ui->spinBox_jumpHeight->value();
    double runTime = ui->spinBox_runTime->value();
    double weight = ui->spinBox_weight->value();
    Athlete athlete(name,weight,jumpHeight, runTime);
    arrayToAdd.push_front(athlete);
}

