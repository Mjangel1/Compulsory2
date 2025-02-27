#include "Player.h"

Player::Player(): VisualObject()
{

    Vertex v1{0.0f,   0.0f,  0.0f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    Vertex v2{0.50f,   0.0f,  0.0f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    Vertex v3{0.0f,   0.50f,  0.0f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    Vertex v4{0.50f,   0.50f,  0.0f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};

    //Pushing 1st triangle,
    mVertices.push_back(v1);
    mVertices.push_back(v2);
    mVertices.push_back(v3);
    //then the 2nd.
    mVertices.push_back(v3);
    mVertices.push_back(v2);
    mVertices.push_back(v4);



}

void Player::move(float x,float y, float z)
{

    float XDirection = x*mSpeed;
    float YDirection =

qDebug() << "Player moved to position:" << mMatrix.column(3);

}
