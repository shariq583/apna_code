#include <iostream>
using namespace std;

int swap (int *a,int *b)
{
    int temp;
    temp=*a;
    a=*b;
    b=*a;    
}



int main ()
{
   int x=2;
   int y=3;
    cout<<"\n The value of x :" << x <<"  y: " << y;
    swap(&x,&y) ;
    cout<<"\n The value of x :" << x <<"  y: " << y;
return 0;
}