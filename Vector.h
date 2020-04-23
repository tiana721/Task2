#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include<iostream>
#include <vector>
#include <fstream>
class Vector
{
 
    std::vector<double> vect;
    std::string file;
public:
    Vector();
    Vector(const size_t len, const std::string& fname);
    Vector(const Vector& other);
    virtual ~Vector() = default;
    void set_i(const int ind, const double num);
    size_t get_size() const;
    double get_i(int ind) const;
    const std::vector<double>& getElements() const;
    std::string get_file() const;
    double operator[](const size_t index) const;
    double& operator[](const size_t index);
    Vector& operator=(const Vector & other);
    virtual void Print() const = 0;

    void PushBack(double newElement);
   

};
#endif // VECTOR_H_INCLUDED
