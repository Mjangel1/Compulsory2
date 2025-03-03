#include "Player.h"

Player::Player(): VisualObject()
{

    Vertex v1{0.0f,   0.0f,  0.0f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    Vertex v2{0.50f,   0.0f,  0.0f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    Vertex v3{0.0f,   0.50f,  0.0f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    Vertex v4{0.50f,   0.50f,  0.0f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    Vertex v5{0.0f,   0.0f,  0.50f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    Vertex v6{0.50f,   0.0f,  0.50f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    Vertex v7{0.0f,   0.50f,  0.50f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    Vertex v8{0.50f,   0.50f,  0.50f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};



    //cube
    //back
    //Pushing 1st triangle,
    mVertices.push_back(v1);
    mVertices.push_back(v2);
    mVertices.push_back(v3);
    //then the 2nd.
    mVertices.push_back(v3);
    mVertices.push_back(v2);
    mVertices.push_back(v4);
    //bottom
    //then 3
    mVertices.push_back(v1);
    mVertices.push_back(v2);
    mVertices.push_back(v5);
    //then 4
    mVertices.push_back(v2);
    mVertices.push_back(v5);
    mVertices.push_back(v6);
    //left
    //then 5
    mVertices.push_back(v1);
    mVertices.push_back(v3);
    mVertices.push_back(v7);
    //then6
    mVertices.push_back(v5);
    mVertices.push_back(v7);
    mVertices.push_back(v1);

    //front
    //then 7
    mVertices.push_back(v5);
    mVertices.push_back(v7);
    mVertices.push_back(v8);
    //then 8
    mVertices.push_back(v5);
    mVertices.push_back(v8);
    mVertices.push_back(v6);

    //right
    //then 9
    mVertices.push_back(v2);
    mVertices.push_back(v4);
    mVertices.push_back(v8);
    //then 10
    mVertices.push_back(v2);
    mVertices.push_back(v8);
    mVertices.push_back(v6);

    //Top
    //then 11
    mVertices.push_back(v3);
    mVertices.push_back(v4);
    mVertices.push_back(v7);
    //then 12
    mVertices.push_back(v4);
    mVertices.push_back(v8);
    mVertices.push_back(v7);







}

void Player::Tick(float DeltaTime)
{

}

void Player::move(float x,float y, float z)
{

    float XDirection= x*mSpeed;
    float YDirection= y*mSpeed;


    mMatrix.translate(XDirection, YDirection,z);

    qDebug() << "Player moved to position:" << mMatrix.column(3);

}
