#include"VectorVert.h"

void VectorVert::Print() const {
    
    std::ofstream fil;
    if (this->get_size() == 0) {
        std::cout << "Error! Vect_Len = 0" << std::endl;
        return;
    }
    std::string empty = "";
    if (this->get_file() == empty) {
        std::cout << "Error! Wrong fname" << std::endl;
        return;
    }
    fil.open(this->get_file().c_str(), std::ios_base::out | std::ios::trunc);
    std::cout << this->get_file() << std::endl;
    if (!fil.is_open()) {
        std::cout << "Error! Cannot open output file" << std::endl;
        return;
    }
    for (int i = 0; i < this->get_size(); i++) {
        fil << this->get_i(i) <<std::endl;
    }
    fil.close();
    return;
}


/*void VectorVert::Output() const{
    std::ofstream fil;
    fil.open(this->get_file().c_str(), std::ios_base::out | std::ios::trunc);
    if (!fil.is_open()) {
      std::cout<<"Error! Cannot open output file"<<std::endl;
    }
    for (int i = 0; i < this->get_len(); i++) {
      fil << this->Geti(i) << '\n';
    }
    fil.close();
    return;
}

VectorVert::VectorVert()
 : Vector()
 {
 }

 VectorVert::VectorVert(const Vector& other)
    : Vector(other)
  {
  }


VectorVert::~VectorVert() {
}

VectorVert operator+(Vector& first, Vector& second) {
    if (first.get_len() != second.get_len()) {
      std::cout<<"Vectors have different lengths!"<<std::endl;
    }
    VectorVert res;
    res.Set_fname(first.get_file());
    for (int i = 0; i < first.get_len(); i++) {
      res.Set(first[i] + second[i]);
    }
    return res;
}*/












/*VectorVert operator+(Vector& first, Vector& second) {
    if (first.get_len() != second.get_len()) {
      //throw std::invalid_argument("Different sizes");
      std::cout<<"Error: Different sizes"<<std::endl;
    }
    //VectorHor retVector( first.get_size(), first.get_filename() );
    VectorVert res;
    //std::cout<<"Hor+"<<std::endl;
    //first.print();
    //std::cout<<"IN Hor+"<<first.get_file()<<std::endl;
    res.Set_fname(first.get_file());
    for (int i = 0; i < first.get_len(); i++) {
      //res[i] = first[i] + second[i];
      res.Set(first[i] + second[i]);
    }
    return res;
}*/
