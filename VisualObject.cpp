#include "VisualObject.h"

VisualObject::VisualObject()
{
    //Vertex v1{-1.0f,   0.0f,  0.0f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    //Vertex v2{1.0f,   0.0f,  0.0f,   0.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    //Vertex v3{0.0f,   1.0f,  0.0f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    //Vertex v4{1.0f,   1.0f,  0.0f,   1.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    //mVertices.push_back(v1);
    //mVertices.push_back(v2);
    //mVertices.push_back(v3);

    //mVertices.push_back(v3);
    //mVertices.push_back(v2);
    //mVertices.push_back(v4);
    mMatrix.setToIdentity();
}

void VisualObject::move(float x, float y, float z)
{
    mMatrix.translate(x, y, z);
}

void VisualObject::scale(float s)
{
    mMatrix.scale(s);
}


void VisualObject::rotate(float t, float x, float y, float z)
{
    mMatrix.rotate(t, x, y, z);
}

void VisualObject::Tick(float DeltaTime)
{



}

void VisualObject::CreateCollider()
{

}

void VisualObject::SetCollider(ColliderSystem* collider)
{

    if(collider == nullptr)
    {
        qDebug() << "Collider pointer is null!";
        return; // Do not assign if nullptr
    }
    Collider = collider;
}

ColliderSystem& VisualObject::GetCollider()
{
    return *Collider;
}

void VisualObject::SetbPickUp(bool pickUp)
{
    bPickedUp = pickUp;
}

bool VisualObject::getbPickUp() const
{
    return bPickedUp;
}

void VisualObject::setName(std::string name)
{
    mName = name;
}

std::string VisualObject::getName() const
{
    return mName;
}


