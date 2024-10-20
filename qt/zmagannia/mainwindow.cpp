#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QDebug>
#include "athlete.h"
#include "quickSort.h"
#include <functional>



int Athlete::staticIdOfNewElem = 0;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
bool MainWindow::readAthletesFromFile(const QString& fileName, QVector<Athlete>& athletes) {
    array.clear();
    QFile file(fileName);
    Athlete::staticIdOfNewElem = 0;
    // Open the file in read-only mode
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        // std::cerr << "Error: Cannot open file " << fileName.toStdString() << std::endl;
        qDebug()<<"error of opening file";
        return false;  // Return false if file cannot be opened
    }


    QTextStream in(&file);
    while (!in.atEnd()){
        Athlete athlete;
        in>>athlete;
        athletes.append(athlete);
    }

    file.close();
    return true;  // Return true if reading was successful
}
void MainWindow::writeDataToFile(const QVector<Athlete>& athletes, const QString& fileName){
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            qDebug()<<"error of opening file";
        return;
    }

    QTextStream out(&file);
    for (const Athlete& athlete : athletes) {
        out << athlete.getName() << "," << athlete.getWeight() << "," << athlete.getJumpHeight() << "," << athlete.getRunTime() << "\n";
    }

    file.close();
}
bool MainWindow::appendAthletes(Athlete athlete){
    array.append(athlete);
    return true;
};
bool MainWindow::updateTableAthletes() {
    ui->table_athletesInfo->setRowCount(0);
    int currentRowCount = ui->table_athletesInfo->rowCount();  // Get the current number of rows

    for (int i = 0; i < array.size(); i++) {
        Athlete athlete = array[i];  // Assuming array contains objects of class Athlete

        // Insert a new row at the end of the table
        ui->table_athletesInfo->insertRow(currentRowCount + i);

        // Add athlete's index to the first column
        QTableWidgetItem *indexItem = new QTableWidgetItem(QString::number(array[i].getId()));
        ui->table_athletesInfo->setItem(currentRowCount + i, 0, indexItem);

        // Add athlete's name to the first column
        QTableWidgetItem *nameItem = new QTableWidgetItem(athlete.getName());
        ui->table_athletesInfo->setItem(currentRowCount + i, 1, nameItem);

        // Add athlete's weight to the second column
        QTableWidgetItem *weightItem = new QTableWidgetItem(QString::number(athlete.getWeight()));
        ui->table_athletesInfo->setItem(currentRowCount + i, 2, weightItem);

        // Add athlete's jump height to the third column
        QTableWidgetItem *jumpItem = new QTableWidgetItem(QString::number(athlete.getJumpHeight()));
        ui->table_athletesInfo->setItem(currentRowCount + i, 3, jumpItem);

        // Add athlete's runtime to the fourth column
        QTableWidgetItem *runtimeItem = new QTableWidgetItem(QString::number(athlete.getRunTime()));
        ui->table_athletesInfo->setItem(currentRowCount + i, 4, runtimeItem);
        // Add athlete's runtime to the fourth column
        QPushButton *buttonToDelete = new QPushButton("×");

        connect(buttonToDelete, &QPushButton::clicked, this, [=]() {//передаємо лямбду-функцію, яка виконається коли кнопка нажметься
            array.removeAt(i);
            // Define what happens when the button is clicked
            int rowToDelete = i;
            ui->table_athletesInfo->removeRow(rowToDelete);            // Remove the row containing the button
            updateTableAthletes();
        });

        ui->table_athletesInfo->setCellWidget(currentRowCount + i, 5, buttonToDelete);

    }

    return true;
}
void MainWindow::on_btn_fillInfoFromFile_clicked()
{
    readAthletesFromFile("C:/Users/denis/nulp/cursova/qt/zmagannia/db.txt", array);
    updateTableAthletes();
}

void MainWindow::on_btn_sort_clicked()
{
    bool isJumCompare = ui->radbtn_compareJump->isChecked();
    bool isWeightCompare = ui->radbut_compareWeight->isChecked();
    std::function<bool(Athlete, Athlete)> comparator = [isJumCompare, isWeightCompare](Athlete a1, Athlete a2) {
        if (isJumCompare) {
            return a1.getJumpHeight() > a2.getJumpHeight();  // Порівняння за вагою
        } else if(isWeightCompare) {
            return a1.getWeight() < a2.getWeight();  // Порівняння за вагою
        }else{
            qDebug()<<"error in comparator";
            return false;
        }
    };
    sortAthletes(array,comparator);
    updateTableAthletes();
}

void MainWindow::on_btn_writeToFile_clicked()
{
    MainWindow::writeDataToFile(array, "C:/Users/denis/nulp/cursova/qt/zmagannia/db_towrite.txt");
}


void MainWindow::on_btn_addNode_clicked()
{
    AddNode dialog(this,array);
    dialog.exec();
    updateTableAthletes();
}
double MainWindow::findMedioumOfHeightJump() const {
    double sum = 0;
    for(int i = 0; i < array.size(); i++){
        sum+=array[i].getJumpHeight();
    }
    return sum/array.size();
}

bool MainWindow::groupByJump(){
    //лямбда-компаратор

    std::function<bool(const Athlete &a1,const Athlete &a2)> comparator = [](const Athlete &a1,const Athlete &a2){
        return a1.getJumpHeight()>a2.getJumpHeight();
    };
    std::sort(array.begin(),array.end(),comparator);
    return 1;
};

void MainWindow::on_btn_groupByJump_clicked()
{
    groupByJump();
    updateTableAthletes();
}


void MainWindow::on_btn_outputByCriterium_clicked()
{
    bool isGreater = ui->radbut_grAver->isChecked() ? true : false;

    TableCriterium windowTable(this, findMedioumOfHeightJump(),isGreater, array);
    windowTable.exec();
}

