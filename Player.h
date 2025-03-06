#ifndef PLAYER_H
#define PLAYER_H

#include "ColliderSystem.h"
#include "VisualObject.h"
class Player: public VisualObject
{
public:
    Player();


private:


    float Y = 0.5f;
    float X = 0.5f;
    float Z = 0.5f;
    float mSpeed = 0.01;
    float XDirection{NULL};
    float YDirection{NULL};

    QVector3D CurrentPosition{};
     ColliderSystem* PlayerCollider{nullptr};



public:

     bool bEnableToMove = true;

    void Tick(float DeltaTime) override;



    void move(float x,float y,float z ) override;


    void OnBeginOverlap(const ColliderSystem &OtherCollider);


    void setPosition(const QVector3D &position);
    QVector3D GetPosition() const;

    void SetCollider(const ColliderSystem &Collider);
    ColliderSystem *GetCollider() const;


};

#endif // PLAYER_H
