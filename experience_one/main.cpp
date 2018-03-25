#include <iostream>
#include"main.h"
#include"Triangle.h"
int main() {
    Triangle t1(3,4,5);
//    cout<<t1.Types_of_triangle()<<endl;
 //   cout<<t1.area_size()<<endl;
    Triangle t2=t1;
    cout<<"t1"<<t1<<endl<<"t2"<<t2<<endl;
    return 0;
}