#include <iostream>
using namespace std;

// class Employee
// {
//     private :
//         int a , b,c ;
//     public :
//         int d , e;              
//      void setData(int a1 , int b1 ,int c1 );
//      void getData()
//      {
//         cout<<"\n The value of a is :"<<a;
//         cout<<"\n The value of b is :"<<b;
//         cout<<"\n The value of c is :"<<c;
//         cout<<"\n The value of d is :"<<d;
//         cout<<"\n The value of e is :"<<e;
//      }
// };
//     void Employee :: setData(int a1 , int b1 ,int c1)
    // {
    //     a=a1;
    //     b=b1;
    //     c=c1;
    // }

class student {

     private :
     int fees; int ad_rs;

     public:
      int cl_as ; char Sec;
     void s_Data(int a, int b , int c , char d);
     void g_data()
     {
        cout<<"The address of student is :"<<ad_rs;
        cout<<"The fees of student is :"<<fees;
        cout<<"The class of student is :"<<cl_as;
        cout<<"The section fo student is :"<<Sec;




     }
};
void student :: s_Data(int a,  int b , int c ,char d)
{
    

}


int main ()
{
    // Employee shariq;
    // shariq.d=12;
    // shariq.e=86;
    // shariq.setData(1,2,3);
    // shariq.getData();




    return 0;
}