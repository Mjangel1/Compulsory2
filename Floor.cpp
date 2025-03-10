#include "Floor.h"

Floor::Floor()
{
    Vertex v1{-15.0f,   -15.0f,  0.0f,   0.0f, 0.50f, 0.50f, 0.0f, 0.0f};
    Vertex v2{-15,   15.0f,  0.0f,       0.0f, 0.50f, 0.50f, 0.0f, 0.0f};
    Vertex v3{15.0f,  15.0f,  0.0f,      0.0f, 0.50f, 0.50f, 0.0f, 0.0f};
    Vertex v4{15.0f,   -15.0f,  0.0f,    0.0f,  0.50f, 0.50f, 0.0f, 0.0f};


    mVertices.push_back(v1);
    mVertices.push_back(v2);
    mVertices.push_back(v3);
    //then the 2nd.
    mVertices.push_back(v3);
    mVertices.push_back(v4);
    mVertices.push_back(v1);
}
