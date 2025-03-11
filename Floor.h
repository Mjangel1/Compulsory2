#ifndef FLOOR_H
#define FLOOR_H

#include "VisualObject.h"
class Floor : public VisualObject
{
public:
    Floor();



private:
    QVector3D mPosition;
    ColliderSystem *FloorCollider{nullptr};

public:

    void setPosition(const QVector3D &position);
    QVector3D GetPosition() const;

};

#endif // FLOOR_H
