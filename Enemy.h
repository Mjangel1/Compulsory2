#ifndef ENEMY_H
#define ENEMY_H

#include "VisualObject.h"

class Enemy : public VisualObject
{
public:
    Enemy();

   void Tick(float DeltaTime) override;

private:


   QVector3D CurrentPosition;




public:
    int T{0};
    float Speed;

   //QVector3D PatrolPos[2];
   QVector<QVector3D> PatrolPos;

    void Patrol(QVector3D Position);

    void move(float x,float y,float z)override;


    void setPosition(const QVector3D &position);
    QVector3D GetPosition() const;

};

#endif // ENEMY_H
