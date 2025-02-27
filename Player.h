#ifndef PLAYER_H
#define PLAYER_H

#include "VisualObject.h"
class Player: public VisualObject
{
public:
    Player();

    float mSpeed = 0.05;



    void move(float x,float y = 0.0f, float z = 0.0f) override;





};

#endif // PLAYER_H
