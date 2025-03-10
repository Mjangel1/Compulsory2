#ifndef DOOR_H
#define DOOR_H

#include "VisualObject.h"
class Door : public VisualObject
{
public:
    Door();

    void Tick(float DeltaTime) override;



private:

    int KeysGot{0};
    float X{1.5};
    float Y{1};
    float Z{5};

    QVector3D DoorPosition;
    ColliderSystem* DoorCollider;

public:
    bool bUnlock{false};


    void setPosition(const QVector3D &position);
    QVector3D GetPosition() const;
};

#endif // DOOR_H
