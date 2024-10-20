#include "athlete.h"
#include <QStringList>

Athlete::Athlete() {
    id = staticIdOfNewElem;
    staticIdOfNewElem++;
}
Athlete::Athlete(QString nameP, float weightP, float jumpHeightP, float runTimeP)
    : name(nameP),weight(weightP),jumpHeight(jumpHeightP),runTime(runTimeP) {
    id = staticIdOfNewElem;
    staticIdOfNewElem++;
};

Athlete::Athlete(const Athlete &other)
    : id(other.getId()),
    name(other.name),
    weight(other.weight),
    jumpHeight(other.jumpHeight),
    runTime(other.runTime)
{

}
void Athlete::setWeight(float value){weight = value;}
void Athlete::setJumpHeight(float value){jumpHeight = value;}
void Athlete::setRunTime(float value){runTime = value;}
void Athlete::setName(QString value){name = value;}
float Athlete::getWeight()const {return weight;}
float Athlete::getJumpHeight()const {return jumpHeight;}
float Athlete::getRunTime() const{return runTime;}
QString Athlete::getName() const {return name;}
int Athlete::getId() const {return id;}

QTextStream& operator>>(QTextStream &in, Athlete &athlete)
{
    QString line;
    if (in.readLineInto(&line)) {
        QStringList fields = line.split(',');

        if (fields.size() == 4) {
            athlete.setName(fields[0]);
            athlete.setWeight(fields[1].toFloat());
            athlete.setJumpHeight(fields[2].toFloat());
            athlete.setRunTime(fields[3].toFloat());
        }
    }

    return in;
}
    QTextStream& operator<<(QTextStream &out, const Athlete &athlete)
    {
        out << athlete.name << ","
            << athlete.weight << ","
            << athlete.jumpHeight << ","
            << athlete.runTime << "\n";
        return out;
    }
