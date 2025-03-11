#include "Floor.h"

Floor::Floor() : VisualObject()
{
    Vertex v1{-15.0f,   -15.0f,  0.0f,   0.0f, 0.50f, 0.80f, 0.0f, 0.0f};
    Vertex v2{-15,   15.0f,  0.0f,       0.0f, 0.50f, 0.80f, 0.0f, 0.0f};
    Vertex v3{15.0f,  15.0f,  0.0f,      0.0f, 0.50f, 0.80f, 0.0f, 0.0f};
    Vertex v4{15.0f,   -15.0f,  0.0f,    0.0f,  0.50f, 0.80f, 0.0f, 0.0f};


    mVertices.push_back(v1);
    mVertices.push_back(v2);
    mVertices.push_back(v3);
    //then the 2nd.
    mVertices.push_back(v3);
    mVertices.push_back(v4);
    mVertices.push_back(v1);

    FloorCollider = new ColliderSystem();
    SetCollider(FloorCollider);
    FloorCollider->SetColliderPosition(QVector3D(0,0,-1));
    FloorCollider->SetSize(QVector3D(0,0,0));
    setName("Floor");



}



void Floor::setPosition(const QVector3D &position)
{
    mPosition = position;

}

QVector3D Floor::GetPosition() const
{
    return mPosition;
}
