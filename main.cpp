#include <iostream>
#include <fstream>
#include "Vector.h"
#include "VectorVert.h"
#include "VectorHor.h"
#include <list>
#include "factory.h"
#include "factoryVert.h"
#include "factoryHor.h"
#include <algorithm>
#include <functional>
#include <iterator>
#include <string>
#include <sstream>
#include <cstdlib>
#include "test.h"
#include <map>
#include <memory>
#include <vector>
using namespace std;

int main(void){

        test1();
        test2();
        test3();
        test4();
        test5();
        cout << endl << endl;

        map< string, Factory* > factoryMap;
        factoryMap["Hori"] = (new FactoryHor);
        factoryMap["Vert"] = (new FactoryVert);
        vector< Vector* > vectorVector;
        const string inputFileName = "in.txt";

        ifstream inputFile(inputFileName.c_str(), std::ios_base::in);
        if (!inputFile.is_open()) {
            throw std::invalid_argument("Error! Cannot open file " + inputFileName + "!\n");
        }

        string tmpString;

        while (getline(inputFile, tmpString)) {
            stringstream strStream;
            strStream << tmpString;

            string vectorType;
            strStream >> vectorType;
            string fileName;
            strStream >> fileName;

            double el;
            std::list<double> elementsList;
            while (strStream >> el) {
                elementsList.push_back(el);
            }

            auto curFactory = factoryMap.find(vectorType);
            if (curFactory == factoryMap.end()) {
                throw std::invalid_argument("Error! Wrong type in file in.txt!\n");
            }

            auto curVect = curFactory->second->Create(static_cast<unsigned int>(elementsList.size()), fileName); 
            unsigned int i = 0;

            for (const auto el : elementsList) {
                curVect->set_i(i, el);
                i++;
            }

            vectorVector.push_back(curVect);
        }

        inputFile.close();
        for (const auto& vect : vectorVector) {
            vect->Print();
            //cout << vect->get_size();
        }
        inputFile.close();
        //delete
        for (const auto& vect : vectorVector) {
            delete vect;
        }
        delete factoryMap["Hori"];
        delete factoryMap["Vert"];
        return 0;


}
