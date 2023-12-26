#include <iostream>
#include <time.h>
#include <ctime>
#include <limits.h>
using namespace std;
typedef struct Res
{
    int g_Nic;
    int R_No;
    int f_No;
    int Bal;

    int Cid=(rand());


} Rese;

int main ()
{
    int choice;
    string G_name;
    Rese Guest ;
    Choice_phase:
    {cout<<"\n What do you want to do:";
    cout<<"\n1.Entry of guest ";
    cout<<"\n2.Check info of guest " ;\
    cin>>choice;}




    switch(choice){
    case 1:
    //phase of entry 
    cin.ignore(10000, '\n');
    cout<<"\n Entry phase ";
    cout<<"\n ============";
    cout<<"\nEnter the guest's name :";
    cin>>G_name;
    //entry in structure
    cout<<"\n Enter The Guest's Cnic Number:";
    cin>>Guest.g_Nic;
    cout<<"\n Assign a room number to the Guest ";
    cin>>Guest.R_No;
    cout<<"\nAssign a floor number to the Guest ";
    cin>>Guest.f_No;
    cout<<"\n Any Balance to collect :";
    cin>>Guest.Bal;
    goto Choice_phase;
    break;

    case 2:
    //recal phase
    cout<<"\nThe name of guest :"<<G_name;
    cout<<"\nThe CNIC Number of :"<<G_name<<"is "<<Guest.g_Nic;
    cout<<"\nThe Room Number of: "<<G_name<<"is "<<Guest.R_No;
    cout<<"\nThe Floor Number of:"<<G_name<<"is "<<Guest.f_No;
    cout<<"\nThe Remaing Balance of: "<<G_name<<"is "<<Guest.Bal;
    cout<<"\nThe Case Number of: "<<G_name<<"is "<<Guest.Cid;
    goto Choice_phase;
    break;

    default :
    cout<<"\nWrong Choice!";
    goto Choice_phase;
    break;
    }

    
     
return 0;
}