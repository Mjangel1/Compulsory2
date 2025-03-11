#ifndef HOUSEDOOR_H
#define HOUSEDOOR_H

#include "VisualObject.h"
class HouseDoor : public VisualObject
{
public:
    HouseDoor();

    void Tick(float DeltaTime) override;

private:

    QVector3D DoorPosition;
    ColliderSystem* DoorCollider{nullptr};

    float X = 2;
    float Y = 2;
    float Z = 1;

public:

    void setPosition(const QVector3D &position);

    QVector3D GetPosition() const;

};

#endif // HOUSEDOOR_H
