//
// Created by cooper on 18-4-1.
//

#ifndef C_EXPERENCE_2_STAFF_H
#define C_EXPERENCE_2_STAFF_H

#include<string>
#include<iostream>
#include <fstream>
#include<cstring>
using namespace std;
class staff {
    friend class company;
    friend ostream& operator<<(ostream &os,const staff &s);
public:
    int age;
    int number;
    string position;
    float salary[12];
    string name;
    bool gender;//True is man,false is woman
    string address;
    char id_number[18];
    staff(int age,int number,string name,bool gender,string address,char id_number[],string position);
    staff(int age,int number,float salary[12],string name,bool gender,string address,char id_number[],string position);
    float num_salary() const;
    bool modify(int age,string address,string position);

};

ostream& operator<<(ostream &os,const staff &s);

#endif //C_EXPERENCE_2_STAFF_H
