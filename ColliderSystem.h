#ifndef COLLIDERSYSTEM_H
#define COLLIDERSYSTEM_H

#include <qvectornd.h>

class ColliderSystem
{
public:
    ColliderSystem();



private:

    QVector3D mColliderPosition;
    QVector3D mSize;





public:


    bool CheckCollision(ColliderSystem &OtherCollider);

    virtual void OnBeginOverlap(ColliderSystem &OtherCollider);

    void SetColliderPosition(QVector3D ColliderPosition);

    QVector3D GetColliderPosition() const;

    void SetSize(QVector3D Size);

    QVector3D GetSize() const;




};

#endif // COLLIDERSYSTEM_H
