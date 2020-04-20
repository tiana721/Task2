cmake_minimum_required (VERSION 3.8)


project (factory)


add_executable (factory  main.cpp Vector.h Vector.cpp VectorVert.h VectorVert.cpp VectorHor.h VectorHor.cpp test.h test.cpp factory.h factoryVert.h factoryHor.h)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")