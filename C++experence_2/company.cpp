//
// Created by cooper on 18-4-1.
//

#include "company.h"

bool company::add_staff(staff &s)
{
    //have some problem;
    this->staff_data.push_back(s);
    return true;

}
bool company::modify_staff(int age,int number,string address,string position)
{
    vector<staff>::iterator it;
    for(it=staff_data.begin();it!=staff_data.end();it++)
    {
        if((*it).number==number)
        {
            it->modify(age,address,position);
            return true;
        }
    }
    if(it==staff_data.end())
        return false;

}
bool company::delete_staff(int number)
{
    vector<staff>::iterator it;
    for(it=staff_data.begin();it!=staff_data.end();it++)
    {
        if((*it).number==number)
        {
            this->staff_data.erase(it);
            return true;
        }

    }
    if(it==staff_data.end())
        return false;

}
bool company::seek(int number)
{
    vector<staff>::iterator it;
    for(it=staff_data.begin();it!=staff_data.end();it++)
    {
        if ((*it).number == number)
        {
            cout<<*it;
        }
    }
    if(it==staff_data.end())
        return false;
}

bool compare(staff x,staff y)
{
    if(x.num_salary()>y.num_salary())
        return true;
    else return false;
}
bool company::sort_salary()
{
    sort(this->staff_data.begin(),this->staff_data.end(),compare);

}
company::company(string companyname,string company_registration_time,float stock_money,string legal_person)
{
    this->companyname=companyname;
    this->company_registration_time=company_registration_time;
    this->stock_money=stock_money;
    this->legal_person=legal_person;
}

bool company::output_tofile()
{
    ofstream outfile("/home/cooper/C_data.txt");
    if(!outfile)
    {
        cout<<"file open data"<<endl;
        return false;
    }

/*    int age;
    int number;
    string position;
    float salary[12];
    string name;
    bool gender;//True is man,false is woman
    string address;
    char id_number[18];
    */
    vector<staff>::iterator it;
    for(it=staff_data.begin();it!=staff_data.end();it++)
    {

        outfile<<it->age<<it->number<<it->position<<it->name<<it->gender<<it->address<<it->id_number;
        for(int i=0;i<12;i++)
            outfile<<it->salary[i];
    }
    return true;
}

bool company::readfromfile()
{
    ifstream infile("/home/cooper/C_data.txt");
    if (!infile){
        cout<<"fail open data"<<endl;
        return false;

    }
    int age;
    int number;
    string position;
    float salary[12];
    string name;
    bool gender;//True is man,false is woman
    string address;
    char id_number[18];
    while(!infile.eof())
    {
        infile>>age>>number>>position>>name>>gender>>address>>id_number;
        for(int i=0;i<12;i++)
        infile>>salary[i];
        staff s(age,number,salary,name,gender,address,id_number,position);
        staff_data.push_back(s);
    }
    return true;
}
/*int age;
    int number;
    string position;
    float salary[12];
    string name;
    bool gender;//True is man,false is woman
    string address;
    char id_number[18];*/