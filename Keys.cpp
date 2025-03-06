#include "Keys.h"

Keys::Keys() : VisualObject ()
{

    Vertex v1{0.0f,   0.0f,  0.0f,   1.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    Vertex v2{X,   0.0f,  0.0f,   1.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    Vertex v3{0.0f,   Y,  0.0f,   1.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    Vertex v4{X,   Y,  0.0f,   1.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    Vertex v5{0.0f,   0.0f,  Z,   1.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    Vertex v6{X,   0.0f, Z,   1.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    Vertex v7{0.0f,  Y,  Z,   1.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    Vertex v8{X,  Y,  Z,   1.0f, 1.0f, 0.0f, 0.0f, 0.0f};

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


    //collider

    KeyCollider = new ColliderSystem;
    SetCollider(*KeyCollider);
    KeyCollider->SetColliderPosition(mPosition);
    KeyCollider->SetSize(QVector3D(X,Y,Z)/2);
    KeyCollider->SetName("Key");





}

void Keys::Tick(float DeltaTime)
{
    GetCollider()->SetColliderPosition(GetPosition());

}

void Keys::setPosition(const QVector3D &position)
{
    mPosition = position;
    mMatrix.translate(mPosition);

}

QVector3D Keys::GetPosition() const
{
    return mPosition;
}

void Keys::SetCollider(const ColliderSystem &Collider)
{
   *KeyCollider = Collider;
}

ColliderSystem* Keys::GetCollider() const
{
    return KeyCollider;
}

void Keys::OnBeginOverlap(ColliderSystem &OtherCollider)
{
    if(OtherCollider.GetName() == "Player")
    {
        qDebug() << "Picked up";
    }

}
