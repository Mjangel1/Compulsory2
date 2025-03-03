#include "Enemy.h"

Enemy::Enemy() : VisualObject ()
{
    Vertex v1{0.0f,   0.0f,  0.0f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    Vertex v2{0.50f,   0.0f,  0.0f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    Vertex v3{0.0f,   0.50f,  0.0f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    Vertex v4{0.50f,   0.50f,  0.0f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    Vertex v5{0.0f,   0.0f,  0.50f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    Vertex v6{0.50f,   0.0f,  0.50f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    Vertex v7{0.0f,   0.50f,  0.50f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    Vertex v8{0.50f,   0.50f,  0.50f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};



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

  mMatrix.translate(CurrentPosition);


  PatrolPos.push_back(QVector3D(1,1,0));
  PatrolPos.push_back(QVector3D(3,3,0));
  PatrolPos.push_back(QVector3D(0,3,0));


  CurrentPosition = PatrolPos[0];

   mMatrix.translate(CurrentPosition);

}

void Enemy::Tick(float DeltaTime)
{
    Speed = 1*DeltaTime;


    if(!PatrolPos.empty())
    {

       Patrol(PatrolPos[T]);
    }


}




void Enemy::Patrol(QVector3D Position)
{
   //qDebug() << "Enemy moved to position:" << (GetPosition()-Position).length();

    QVector3D Direction = Position - GetPosition();

    if(Direction.length() > 0.05)
    {
        Direction.normalize();
        move(Direction.x()*Speed,Direction.y()*Speed,Direction.z());

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

   setPosition(GetPosition() + QVector3D(x, y, z));

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
