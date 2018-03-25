//
// Created by cooper on 18-3-25.
//

#include "Triangle.h"
bool Triangle::istriangle(float l1, float l2,float l3) const
{
    if((l1+l2)<=l3)
        return false;
    else if ((l2+l3)<=l1)
        return false;
    else if((l1+l3)<=l2)
        return false;
    else return true;
}
Triangle::Triangle(float l1=0,float l2=0,float l3=0)
{
    if(!istriangle(l1,l2,l3))
    {
        cout<<"The three edge isn't correct"<<endl;
        is_create_success=false;
    }
    else
    {
        _length_one=l1;
        _length_two=l2;
        _length_three=l3;
        is_create_success=true;
    }

}
//初始化列表复制构造函数
Triangle::Triangle(Triangle &T):
_length_one(T._length_one),
_length_two(T._length_two),
_length_three(T._length_three),
is_create_success(T.is_create_success)
{}

Triangle& Triangle::operator= (const Triangle &T)
{
    _length_one=T._length_one;
    _length_two=T._length_two;
    _length_three=T._length_three;
    is_create_success=T.is_create_success;
}

Triangle::~Triangle()
{

}
float Triangle::area_size() const
{
    float p=(_length_one+_length_two+_length_three)/float(2);
    float Time_area_size;
    Time_area_size=p*(p-_length_one)*(p-_length_two)*(p-_length_three);
    return sqrt(Time_area_size);

}
float Triangle::perimeter() const
{
    return (_length_three+_length_two+_length_one);
}
string Triangle::Types_of_triangle() const
{
    if(_length_one==_length_two&&_length_two==_length_three)
        return "Equilateral triangle";//possible have problem;
    else if(((pow(_length_one,2)+pow(_length_two,2))==pow(_length_three,2))||
            ((pow(_length_two,2)+pow(_length_three,2))==pow(_length_one,2))||
            ((pow(_length_three,2)+pow(_length_one,2))==pow(_length_two,2)))
    {
        if((_length_two!=_length_one&&_length_two!=_length_three&&_length_one!=_length_three))
        return "Right Triangle";
        else return"Isosceles right angle triangle";
    }
    else{
        return "oridinary triangle";
    }
}
float Triangle::lengthone() const
{
    return _length_one;
}
float Triangle::lengthtwo() const
{
    return _length_two;
}
float Triangle::lengththree() const
{
    return _length_three;
}
ostream& operator<<(ostream &os,const Triangle &T)
//ostream& operator<<(ostream &os,Triangle &T)
{
    cout<<"is creater success:  "<<T.is_create_success<<endl;
    if(T.is_create_success){
        cout<<"The three edge:  "<<T.lengthone()<<"   "<<T.lengthtwo()<<"   "<<T.lengththree()<<endl;
        cout<<"The area of Triangel:   "<<T.area_size()<<endl;
        cout<<"The Triangle perimeter:   "<<T.perimeter()<<endl;
    }

}

//my problem:
//默认参数是在定义中写还是在申明中写
//内联函数是在声明中还是在定义中写inline
//const 引用
//此时的重载运算符不采用member function 因为采用之后形式非常奇怪