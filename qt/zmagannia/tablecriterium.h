#ifndef TABLECRITERIUM_H
#define TABLECRITERIUM_H

#include <QDialog>
#include <QVector>
#include "athlete.h"

namespace Ui {
class TableCriterium;
}

class TableCriterium : public QDialog
{
    Q_OBJECT

public:
    explicit TableCriterium(QWidget *parent,double medium ,bool isGreater,QVector<Athlete> array);
    ~TableCriterium();

private:
    QVector<Athlete> copyArray;
    Ui::TableCriterium *ui;
};

#endif // TABLECRITERIUM_H
