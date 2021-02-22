//
// Created by stalk on 22.02.2021.
//

#ifndef GLAVA_3_VEC_H
#define GLAVA_3_VEC_H


#include <vector>

template <class T> class Vec : public std::vector<T>
{
public:
    Vec() : std::vector<T>() {}
    Vec(int s) : std::vector<T>(s) {}

    T& operator[] (int i) { return std::vector<T>().at(i); }
    const T& operator[] (int i) const { return std::vector<T>().at(i); }
};


#endif //GLAVA_3_VEC_H
