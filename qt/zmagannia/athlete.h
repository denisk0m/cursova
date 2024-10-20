#ifndef ATHLETE_H
#define ATHLETE_H
#include <QString>

class Athlete
{
public:
    static int staticIdOfNewElem;
    Athlete();
    Athlete(QString nameP, float weightP, float jumpHeightP, float runTimeP);
    void setWeight(float value);
void setJumpHeight(float value);
    void setRunTime(float value);
void setName(QString value);
    float getWeight()const;
    float getJumpHeight()const;
    float getRunTime() const;
    QString getName() const;
    int getId() const ;
private:
    int id;
    QString name;
    float weight;
    float jumpHeight;
    float runTime;

};


#endif // ATHLETE_H
