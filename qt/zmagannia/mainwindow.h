#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "athlete.h"
#include "addnode.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool readAthletesFromFile(const QString& fileName, QVector<Athlete>& athletes);
    void writeDataToFile(const QVector<Athlete>& athletes, const QString& fileName);
    bool updateTableAthletes();
    bool appendAthletes(Athlete athlete);
    double findMedioumOfHeightJump() const;
    bool groupByJump();
private slots:
    void on_btn_fillInfoFromFile_clicked();

    void on_btn_sort_clicked();

    void on_btn_writeToFile_clicked();

    void on_btn_addNode_clicked();

    void on_btn_groupByJump_clicked();

private:
    QVector<Athlete> array;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
