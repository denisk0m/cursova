#include "addnode.h"
#include "ui_addnode.h"
#include "mainwindow.h"

AddNode::AddNode(QWidget *parent)
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

