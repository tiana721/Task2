#ifndef __FACTORY_H_INCLUDED__
#define __FACTORY_H_INCLUDED__

#include <iostream>
#include "Vector.h"

class Factory {
    public:
        virtual Vector* Create(const size_t len, const std::string& fname) const = 0;

        Factory() {};
        virtual ~Factory() {};
};


#endif // __FACTORY_   HPP_INCLUDED__
