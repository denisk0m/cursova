#include "addnode.h"
#include <QDebug>
#include "ui_addnode.h"

AddNode::AddNode(QWidget *parent, QVector<Athlete> & athletes)
    : QDialog(parent)
    , ui(new Ui::addNode),
    arrayToAdd(athletes)
{
    ui->setupUi(this);
}

AddNode::~AddNode()
{
    delete ui;
}

void AddNode::on_buttonBox_accepted()
{
    QString name = ui->lineEdit_name->text();
    double jumpHeight = ui->spinBox_jumpHeight->value();
    double runTime = ui->spinBox_runTime->value();
    double weight = ui->spinBox_weight->value();
    Athlete athlete(name,weight,jumpHeight, runTime);
    arrayToAdd.push_front(athlete);
}

