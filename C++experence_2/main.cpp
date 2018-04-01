#include <iostream>
#include"company.h"
#include"staff.h"
using namespace std;


int main() {
    company apple("apple","1997",88888.0,"qbs");
    //apple.readfromfile();
    char a[19]="34022119970409495X";
    staff xkp(20,2255,"xkp",1,"wuhu",a,"leader");
    cout<<xkp;
    apple.add_staff(xkp);
    apple.output_tofile();
    return 0;
}