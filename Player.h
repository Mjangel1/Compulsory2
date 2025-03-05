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
    float mSpeed = 0.05;
    float XDirection{NULL};
    float YDirection{NULL};

    QVector3D CurrentPosition{};



public:
    void Tick(float DeltaTime) override;



    void move(float x,float y,float z ) override;



    void setPosition(const QVector3D &position);
    QVector3D GetPosition() const;

    ColliderSystem* PlayerCollider;
};

#endif // PLAYER_H
