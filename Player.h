#ifndef PLAYER_H
#define PLAYER_H

#include "VisualObject.h"
class Player: public VisualObject
{
public:
    Player();


private:

    float mSpeed = 0.05;
    float XDirection{NULL};
    float YDirection{NULL};

public:
    void Tick(float DeltaTime) override;



    void move(float x,float y,float z ) override;





};

#endif // PLAYER_H
