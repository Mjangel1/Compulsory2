#ifndef KEYS_H
#define KEYS_H

#include "ColliderSystem.h"
#include "VisualObject.h"


class Keys: public VisualObject
{
public:
    Keys();

   void Tick(float DeltaTime) override;

private:

    QVector3D mPosition;
    ColliderSystem *KeyCollider;

    float Y = 0.5f;
    float X = 0.5f;
    float Z = 0.5f;



public:



    void setPosition(const QVector3D &position);
    QVector3D GetPosition() const;


    void OnBeginOverlap(ColliderSystem &OtherCollider);




};

#endif // KEYS_H
