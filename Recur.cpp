#include <iostream>
using namespace std;


int fibo(int n)
{
    if (n <=1)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);

}
int fac(int a){
    if (a<=1){

        return 1 ;
    }
    return a * fac(a-1);
}
int main ()
{
int a ;
// cout<<"on what index you want to know the fibonaci series:";cin>>a;
// cout<<fibo(a);
cout<<"Enter a value to find it's factorial ";cin>>a ;
cout<<"\n The factorial of "<<a<<" is: "<<fac(a);


return 0;
}