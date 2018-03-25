//
// Created by cooper on 18-3-25.
//
#pragma once
#ifndef EXPERIENCE_ONE_STAFF_H
#define EXPERIENCE_ONE_STAFF_H
#include<iostream>
#include<string>
#include<ostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ostream;
class Triangle {
private:
    float _length_one;
    float _length_two;
    float _length_three;
public:
    bool is_create_success;
    Triangle(float l1,float l2,float l3);
    Triangle(Triangle &T);
    Triangle& operator= (const Triangle &T);
    ~Triangle();
    bool istriangle(float l1=0,float l2=0,float l3=0) const;
    float area_size() const;
    float perimeter() const;
    string Types_of_triangle() const;
    float lengthone() const;
    float lengthtwo() const;
    float lengththree() const;
};
ostream& operator<<(ostream &os,const Triangle &T);

#endif //EXPERIENCE_ONE_STAFF_H
