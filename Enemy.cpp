#include "Enemy.h"

Enemy::Enemy() : VisualObject ()
{

    Vertex v1{0.0f,   0.0f,  0.0f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    Vertex v2{0.50f,   0.0f,  0.0f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    Vertex v3{0.0f,   0.50f,  0.0f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    Vertex v4{0.50f,   0.50f,  0.0f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};

    //Pushing 1st triangle,
    mVertices.push_back(v1);
    mVertices.push_back(v2);
    mVertices.push_back(v3);
    //then the 2nd.
    mVertices.push_back(v3);
    mVertices.push_back(v2);
    mVertices.push_back(v4);

  mMatrix.translate(CurrentPosition);


  PatrolPos.push_back(QVector3D(1,1,0));
  PatrolPos.push_back(QVector3D(3,3,0));
  PatrolPos.push_back(QVector3D(0,3,0));


  CurrentPosition = PatrolPos[0];

   mMatrix.translate(CurrentPosition);

}

void Enemy::Tick(float DeltaTime)
{


    if(!PatrolPos.empty())
    {

       Patrol(PatrolPos[T]);
    }


}




void Enemy::Patrol(QVector3D Position)
{
   qDebug() << "Enemy moved to position:" << (GetPosition()-Position).length();

    QVector3D Direction = Position - GetPosition();

    if(Direction.length() > 0.05)
    {
        Direction.normalize();
        move(Direction.x()*0.01,Direction.y()*0.01,Direction.z());

    }
    else
    {
        setPosition(Position);
        qDebug() << "Enemy Reached Location";
        T++;

        if(T >= PatrolPos.size())
        {

            T= 0;

        }

    }




}

void Enemy::move(float x,float y,float z)
{

    mMatrix.translate(x,y,z);

    CurrentPosition += QVector3D(x, y, z);

    // qDebug() << "Enemy moved to position:" << GetPosition();


}

void Enemy::setPosition(const QVector3D &position)
{

    CurrentPosition = position;

}



QVector3D Enemy::GetPosition() const
{

    return CurrentPosition;

}
