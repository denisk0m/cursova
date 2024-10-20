#ifndef ATHLETE_H
#define ATHLETE_H
#include <QString>
#include <QTextStream>

class Athlete
{
public:
    static int staticIdOfNewElem;
    Athlete();
    Athlete(QString nameP, float weightP, float jumpHeightP, float runTimeP);
    Athlete(const Athlete &other);

    void setWeight(float value);
    void setJumpHeight(float value);
    void setRunTime(float value);
    void setName(QString value);
    float getWeight()const;
    float getJumpHeight()const;
    float getRunTime() const;
    QString getName() const;
    int getId() const ;
    friend QTextStream& operator>>(QTextStream &in, Athlete &athlete);
    friend QTextStream& operator<<(QTextStream &out, const Athlete &athlete);
private:
    int id;
    QString name;
    float weight;
    float jumpHeight;
    float runTime;

};


#endif // ATHLETE_H
