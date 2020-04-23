#ifndef VECTORHOR_H_INCLUDED
#define VECTORHOR_H_INCLUDED
#include"Vector.h"
//#include<iostream>
class VectorHor: public Vector{
    public:

           VectorHor() : Vector(){};
           VectorHor(const size_t len, const std::string& fname) : Vector(len, fname) {};
           VectorHor(const Vector& other) : Vector(other){};
           ~VectorHor() = default;
           using Vector::operator=;
           void Print() const;
           friend VectorHor operator*(const Vector& first, const Vector& second);
           friend VectorHor operator-(const Vector& first, const Vector& second);
           friend VectorHor operator+(const Vector& first, const Vector& second);
};

#endif // VECTORHOR_H_INCLUDED
