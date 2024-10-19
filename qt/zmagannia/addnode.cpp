#include "addnode.h"
#include "ui_addnode.h"

AddNode::AddNode(QWidget *parent, QVector<Athlete> & athletes)
    : QDialog(parent)
    , ui(new Ui::addNode)

{
    ui->setupUi(this);
}

AddNode::~AddNode()
{
    delete ui;
}

void AddNode::on_buttonBox_accepted()
{

}

