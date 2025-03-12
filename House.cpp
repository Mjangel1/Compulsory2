#include "House.h"

House::House() :  VisualObject ()
{
    Vertex v1{0.0f,   0.0f,  0.0f,   1.0f, 0.0f, 0.4f, 0.0f, 0.0f};
    Vertex v2{X,   0.0f,  0.0f,   1.0f, 0.0f, 0.4f, 0.0f, 0.0f};
    Vertex v3{0.0f,   Y,  0.0f,   1.0f, 0.0f, 0.4f, 0.0f, 0.0f};
    Vertex v4{X,   Y,  0.0f,   1.0f, 0.0f, 0.4f, 0.0f, 0.0f};
    Vertex v5{0.0f,   0.0f,  Z,   1.0f, 0.0f, 0.4f, 0.0f, 0.0f};
    Vertex v6{X,   0.0f, Z,   1.0f, 0.0f, 0.4f, 0.0f, 0.0f};
    Vertex v7{0.0f,  Y,  Z,   1.0f, 0.0f, 0.4f, 0.0f, 0.0f};
    Vertex v8{X,  Y,  Z,   1.0f, 0.0f, 0.4f, 0.0f, 0.0f};



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


    HouseCollider = new ColliderSystem();
    SetCollider(HouseCollider);


    HouseCollider->SetColliderPosition(HousePosition);
    HouseCollider->SetSize((QVector3D(X,Y,Z)/2));
    setName("House");





}

void House::Tick(float DeltaTime)
{
    GetCollider().SetColliderPosition(GetPosition());
    //qDebug() <<GetCollider().GetSize();
}



void House::setPosition(const QVector3D &position)
{
    HousePosition = position;
    mMatrix.setToIdentity();
    mMatrix.translate(HousePosition);


}

QVector3D House::GetPosition() const
{
    return HousePosition;
}


