#include"VectorHor.h"
#include<iostream>
#include <fstream>


void VectorHor::Print() const {
    std::ofstream fil;
    if (this->get_file() == "") {
        std::cout << "Error! Wrong fname" << std::endl;
        return;
    }
    fil.open(this->get_file().c_str(), std::ios_base::out | std::ios::trunc);
    std::cout << this->get_file() << std::endl;
    if (!fil.is_open()) {
        //throw std::invalid_argument("Error! Cannot open file " + this->get_filename() + "!\n");
        std::cout << "Error! Cannot open output file" << std::endl;
    }
    for (int i = 0; i < this->get_size(); i++) {
        fil << this->get_i(i) << ' ';
    }
    fil.close();
    return;
}

//VectorHor::VectorHor(const size_t len, const std::string fname) : Vector(len, fname) {}

//VectorHor::VectorHor(const Vector& other) : Vector(other) {}

VectorHor operator+(const Vector& first, const Vector& second) {
    if (first.get_size() != second.get_size()) {
        throw std::invalid_argument("Different sizes");
    }

    VectorHor res = VectorHor(first.get_size(), first.get_file());

    size_t i = 0;

    for(i = 0; i < res.get_size(); ++i) {
        res[i] = first[i] + second[i];
    }

    return res;
}


VectorHor operator-(const Vector& first, const Vector& second) {
    if (first.get_size() != second.get_size()) {
        throw std::invalid_argument("Different sizes");
    }

    VectorHor res = VectorHor(first.get_size(), first.get_file());

    size_t i = 0;

    for(i = 0; i < res.get_size(); ++i) {
        res[i] = first[i] - second[i];
    }

    return res;
}


VectorHor operator*(const Vector& first, const Vector& second) {
    if (first.get_size() != second.get_size()) {
        throw std::invalid_argument("Different sizes");
    }

    VectorHor res = VectorHor(first.get_size(), first.get_file());

    size_t i = 0;

    for(i = 0; i < res.get_size(); ++i) {
        res[i] = first[i] * second[i];
    }

    return res;
}


/*void VectorHor::Output() const{
    std::ofstream fil;
    fil.open(this->get_file().c_str(), std::ios_base::out | std::ios::trunc);
    if (!fil.is_open()) {
      std::cout<<"Error! Cannot open output file"<<std::endl;
    }
    for (int i = 0; i < this->get_len(); i++) {
      fil << this->Geti(i) << ' ';
    }
    fil.close();
    return;
}

VectorHor::VectorHor(const Vector& other)
    : Vector(other)
{
}


VectorHor::VectorHor()
 : Vector()
 {
 }

VectorHor::~VectorHor() {
}

VectorHor operator-(Vector& first, Vector& second) {
    if (first.get_len() != second.get_len()) {
      std::cout<<"Error: Different sizes"<<std::endl;
    }
    VectorHor res;
    res.Set_fname(first.get_file());
    for (int i = 0; i < first.get_len(); i++) {
      res.Set(first[i] - second[i]);
    }
    return res;
}

VectorHor operator+(VectorHor& first, VectorHor& second) {
    if (first.get_len() != second.get_len()) {
      std::cout<<"Error: Different sizes"<<std::endl;
    }
    res.Set_fname(first.get_file());
    for (int i = 0; i < first.get_len(); i++) {
      res.Set(first[i] + second[i]);
    }
    return res;
}

double operator*(Vector& first, Vector& second) {
    if (first.get_len() != second.get_len()) {
      std::cout<<"Error: Different sizes"<<std::endl;
    }
    double res = 0;
    for (int i = 0; i < first.get_len(); i++) {
      res += first[i] * second[i];
    }
    return res;
}*/
///omp_set_num_threads(4);
    ///#pragma omp parallel for shared(lhs, rhs, result) private(i)