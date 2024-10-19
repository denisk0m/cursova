#ifndef ADDNODE_H
#define ADDNODE_H
#include <QVector>
#include "athlete.h"
#include <QDialog>


namespace Ui {
class addNode;
}

class AddNode : public QDialog
{
    Q_OBJECT

public:
    explicit AddNode(QWidget *parent , QVector<Athlete> & athletes );
    ~AddNode();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::addNode *ui;
};

#endif // ADDNODE_H
