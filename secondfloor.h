#ifndef SECONDFLOOR_H
#define SECONDFLOOR_H

#include "VisualObject.h"
class SecondFloor : public VisualObject
{
public:
    SecondFloor();

private:
    QVector3D mPosition;
    ColliderSystem *SecFloorCollider;


public:

    void setPosition(const QVector3D &position);
    QVector3D GetPosition() const;
};

#endif // SECONDFLOOR_H
