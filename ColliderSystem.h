#ifndef COLLIDERSYSTEM_H
#define COLLIDERSYSTEM_H

#include <qvectornd.h>

class ColliderSystem
{
public:
    ColliderSystem();



private:

    //location of the colllider
    QVector3D mColliderPosition;
    //size of the collider
    QVector3D mSize;
    //tag of the collider
    QString mName;





public:


    //check if the two object are overlaping each other(colliding)
    bool CheckCollision(const ColliderSystem &OtherCollider);


    void SetColliderPosition(QVector3D ColliderPosition);

    QVector3D GetColliderPosition() const;

    void SetSize(QVector3D Size);

    QVector3D GetSize() const;

    void SetName(const QString &Name);
    QString GetName() const;




};

#endif // COLLIDERSYSTEM_H
