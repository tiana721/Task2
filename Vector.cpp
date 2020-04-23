#include<iostream>
#include"Vector.h"
#include <stdexcept>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <sstream>
using namespace std;

Vector::Vector() {
    file = "";  
    vect.resize(1, 0); 
}

Vector::Vector(const size_t len, const std::string& fname) {
    file = fname;
    vect.resize(len);
}

Vector::Vector(const Vector& other) {
    vect = other.getElements();
    file = other.file;
}

void Vector::set_i(const int ind, const double num) {
    vect.at(ind) = num;
}

std::string Vector::get_file() const {
    return file;
}

size_t Vector::get_size() const {
    return vect.size();
}

double Vector::get_i(int ind) const {
    return vect.at(ind);
}

const std::vector<double>& Vector::getElements() const {
    return vect;
}

double Vector::operator[](const size_t index) const {
    return vect.at(index);
}


double& Vector::operator[](const size_t index) {
    return vect.at(index);
}

Vector& Vector::operator=(const Vector& other) {
    vect = other.getElements();
    file = other.file;
    return *this;
}



void Vector::PushBack(double newElement) {
    vect.push_back(newElement);
}




/*

Vector::Vector(const int len_, const string& fname) {
    file = fname;

    ofstream fil(file.c_str());
    if (!fil) {
      cout<<"Error! Cannot open file "<<endl;
      exit(1);
    }
    fil.close();
    len = len_;
    arr = new double[len];
    memset(arr,0, sizeof(double)*len);
}


}*/

//typename std::vector<double>::const_iterator end() const; 


/*typename std::vector<double>::iterator Vector::begin() {
    return vect.begin();
}


typename std::vector<double>::iterator Vector::end() {
    return vect.end();
}


typename std::vector<double>::const_iterator Vector::begin() const {
    return vect.begin();
}


typename std::vector<double>::const_iterator Vector::end() const {
    return vect.end();
}*/