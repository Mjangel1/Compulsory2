#include "ColliderSystem.h"

ColliderSystem::ColliderSystem()
{

}

bool ColliderSystem::CheckCollision( const ColliderSystem &OtherCollider)
{

    if(mColliderPosition.x() - mSize.x() <= OtherCollider.GetColliderPosition().x() + OtherCollider.mSize.x()
        && mColliderPosition.x() + mSize.x() >= OtherCollider.GetColliderPosition().x() - OtherCollider.mSize.x()
        && mColliderPosition.y() - mSize.y() <= OtherCollider.GetColliderPosition().y() + OtherCollider.mSize.y()
        && mColliderPosition.y() + mSize.y() >= OtherCollider.GetColliderPosition().y() - OtherCollider.mSize.y()
        && mColliderPosition.z() - mSize.z() <= OtherCollider.GetColliderPosition().z() + OtherCollider.mSize.z()
        && mColliderPosition.z() + mSize.z() >= OtherCollider.GetColliderPosition().z() - OtherCollider.mSize.z())
    {
        return true;

    }
    else{ return false;}


}

void ColliderSystem::SetColliderPosition(QVector3D ColliderPosition)
{

    mColliderPosition = ColliderPosition;
}

QVector3D ColliderSystem::GetColliderPosition() const
{
    return mColliderPosition;
}

void ColliderSystem::SetSize(QVector3D Size)
{
    mSize = Size;

}

QVector3D ColliderSystem::GetSize() const
{
    return mSize;
}

void ColliderSystem::SetName(const QString &Name)
{
    mName = Name;
}

QString ColliderSystem::GetName() const
{
    return mName;
}


