#pragma once
#include "factory.h"
//#include<iostream>
#include "Vector.h"
#include "VectorVert.h"

class FactoryVert : public Factory {
    public:
        Vector* Create(const size_t len, const std::string& fname) const
        {
            return new VectorVert(len, fname);
        };
        //virtual Vector* Create(const size_t len)
        FactoryVert():Factory(){};
        ~FactoryVert() {};
};


//#endif // __FACTORYVERT_HPP_INCLUDED__