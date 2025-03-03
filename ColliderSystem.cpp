#include "ColliderSystem.h"

ColliderSystem::ColliderSystem() {}

bool ColliderSystem::CheckCollision(ColliderSystem &OtherCollider)
{

}

void ColliderSystem::SetColliderPosition(QVector3D ColliderPosition)
{

    mColliderPosition = ColliderPosition;
}

QVector3D ColliderSystem::GetColliderPosition() const
{
    return mColliderPosition;
}

