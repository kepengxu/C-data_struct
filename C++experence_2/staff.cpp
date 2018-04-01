//
// Created by cooper on 18-4-1.
//

#include "staff.h"
ostream& operator<<(ostream &os,const staff &s)
{
    cout<<"name:  "<<s.name<<"   age:  "<<s.age<<endl;
    cout<<"num_salary :  "<<s.num_salary()<<"  number: "<<s.number<<endl;
    cout<<"address:   "<<s.address<<"  position:   "<<s.position<<endl;
    cout<<"gender :";
    if(s.gender)cout<<"man"<<endl;
    else cout<<"woman"<<endl;

}

staff::staff(int age,int number,string name,bool gender,string address,char id_number[],string position)
{
    this->age=age;
    this->number=number;
    this->name=name;
    this->gender=gender;
    this->address=address;
    this->position=position;
    for(int i=0;i<12;i++)
        this->salary[i]=0.0;//初始化工资
    for(int i=0;i<18;i++)
        this->id_number[i]=id_number[i];
}

staff::staff(int age,int number,float salary[12],string name,bool gender,string address,char id_number[],string position)
{
    this->age=age;
    this->number=number;
    this->name=name;
    this->gender=gender;
    this->address=address;
    this->position=position;
    for(int i=0;i<12;i++)
        this->salary[i]=salary[i];
    for(int i=0;i<18;i++)
        this->id_number[i]=id_number[i];
}

float staff::num_salary() const
{
    float num=0.0;
    for(int i=0;i<12;i++)
        num+=salary[i];
    return num;
}
bool staff::modify(int age,string address,string position)
{

    this->age=age;
    this->address=address;
    this->position=position;
    return true;
}