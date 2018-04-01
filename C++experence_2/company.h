//
// Created by cooper on 18-4-1.
//

#ifndef C_EXPERENCE_2_COMPANY_H
#define C_EXPERENCE_2_COMPANY_H
#include<string>
#include<algorithm>
#include<vector>
#include <fstream>
#include"staff.h"
using namespace std;


class company {
public:
    string companyname;
    string company_registration_time;
    vector<staff> staff_data;
    float stock_money;
    string legal_person;

    company(string companyname,string company_registration_time,float stock_money,string legal_person);
    bool add_staff(staff &s);//往vector中加入信息
    bool modify_staff(int age,int number,string address,string position);
    bool delete_staff(int number);
    bool seek(int number);
    bool sort_salary();
//    void print_all();
    bool output_tofile();
    bool readfromfile();




};


#endif //C_EXPERENCE_2_COMPANY_H
