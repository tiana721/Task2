#ifndef VECTORVERT_H_INCLUDED
#define VECTORVERT_H_INCLUDED
#include"Vector.h"
//#include <fstream>
//#include"VectorVert.h"
//#include<iostream>
class VectorVert: public Vector{
    public:
           VectorVert() {};
           VectorVert(const size_t len, const std::string& fname) : Vector(len, fname) {};
           VectorVert(const Vector& other) : Vector(other) {};

           ~VectorVert() = default;

           using Vector::operator=;

           void Print() const;
};

#endif // VECTORVERT_H_INCLUDED
