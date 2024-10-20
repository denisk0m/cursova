#include "athlete.h"

Athlete::Athlete() {}
Athlete::Athlete(QString nameP, float weightP, float jumpHeightP, float runTimeP)
    : name(nameP),weight(weightP),jumpHeight(jumpHeightP),runTime(runTimeP) {
    id = staticIdOfNewElem;
    staticIdOfNewElem++;
};
void Athlete::setWeight(float value){weight = value;}
void Athlete::setJumpHeight(float value){jumpHeight = value;}
void Athlete::setRunTime(float value){runTime = value;}
void Athlete::setName(QString value){name = value;}
float Athlete::getWeight()const {return weight;}
float Athlete::getJumpHeight()const {return jumpHeight;}
float Athlete::getRunTime() const{return runTime;}
QString Athlete::getName() const {return name;}
int Athlete::getId() const {return id;}

