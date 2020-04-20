#pragma once
#include "factory.h"
//#include<iostream>
#include "Vector.h"
#include "VectorHor.h"
class FactoryHor : public Factory{
    public:
        Vector* Create(const size_t len, const std::string& fname) const{
            return new VectorHor(len, fname);
        }
        FactoryHor() :Factory() {};
        ~FactoryHor() {};
};