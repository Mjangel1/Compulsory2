#include "secondfloor.h"

SecondFloor::SecondFloor()
{
    Vertex v1{-5.0f,   -5.0f,  0.0f,   1.0f, 0.0f, 0.4f, 0.0f, 0.0f};
    Vertex v2{-5,   5.0f,  0.0f,       1.0f, 0.0f, 0.4f, 0.0f, 0.0f};
    Vertex v3{5.0f,  5.0f,  0.0f,      1.0f, 0.0f, 0.4f, 0.0f, 0.0f};
    Vertex v4{5.0f,   -5.0f,  0.0f,    1.0f, 0.0f, 0.4f, 0.0f, 0.0f};


    mVertices.push_back(v1);
    mVertices.push_back(v2);
    mVertices.push_back(v3);
    //then the 2nd.
    mVertices.push_back(v3);
    mVertices.push_back(v4);
    mVertices.push_back(v1);

    SecFloorCollider = new ColliderSystem();
    SetCollider(SecFloorCollider);
    SecFloorCollider->SetColliderPosition(QVector3D(0,0,-1));
    SecFloorCollider->SetSize(QVector3D(0,0,0));
    setName("Floor");

}

void SecondFloor::setPosition(const QVector3D &position)
{
    mPosition = position;
    mMatrix.setToIdentity();
    mMatrix.translate(mPosition);

}

QVector3D SecondFloor::GetPosition() const
{
    return mPosition;
}
