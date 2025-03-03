#ifndef COLLIDERSYSTEM_H
#define COLLIDERSYSTEM_H

#include <qvectornd.h>

class ColliderSystem
{
public:
    ColliderSystem();



private:

    QVector3D mColliderPosition;
    QVector3D mMin;
    QVector3D mMax;




public:


    bool CheckCollision(ColliderSystem &OtherCollider);

    virtual void OnBeginOverlap(ColliderSystem &OtherCollider);

    void SetColliderPosition(QVector3D ColliderPosition);

    QVector3D GetColliderPosition() const;

    void SetMin(QVector3D Min);

    QVector3D GetMin() const;

    void SetMax(QVector3D Max);

    QVector3D GetMax() const;


};

#endif // COLLIDERSYSTEM_H
