#ifndef HOUSE_H
#define HOUSE_H

#include "ColliderSystem.h"
#include "VisualObject.h"

class House : public VisualObject
{
public:
    House();

    void Tick(float DeltaTime) override;


private:


    ColliderSystem* HouseCollider;
    float X {4};
    float Y {4};
    float Z {5};
    QVector3D HousePosition;


public:

    void setPosition(const QVector3D &position);
    QVector3D GetPosition() const;





};

#endif // HOUSE_H
