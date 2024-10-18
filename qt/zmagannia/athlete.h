#ifndef ATHLETE_H
#define ATHLETE_H
#include <QString>

class Athlete
{
public:
    static int staticIdOfNewElem;
    Athlete();
    Athlete(QString nameP, float weightP, float jumpHeightP, float runTimeP)
        : name(nameP),weight(weightP),jumpHeight(jumpHeightP),runTime(runTimeP) {
        id = staticIdOfNewElem;
        staticIdOfNewElem++;
    };
    void setWeight(float value){weight = value;}
    void setJumpHeight(float value){jumpHeight = value;}
    void setRunTime(float value){runTime = value;}
    void setName(QString value){name = value;}
    float getWeight()const {return weight;}
    float getJumpHeight()const {return jumpHeight;}
    float getRunTime() const{return runTime;}
    QString getName() const {return name;}
    int getId() const {return id;}
private:
    int id;
    QString name;
    float weight;
    float jumpHeight;
    float runTime;

};


#endif // ATHLETE_H
