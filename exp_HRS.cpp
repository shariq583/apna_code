#include <iostream>
#include <ctime>
#include <limits>
using namespace std;

typedef struct Res
{
    int g_Nic;
    int R_No;
    int f_No;
    int Bal;

    int Cid = (rand());
} Rese;

int main()
{
    int choice;
    string G_name;
    Rese Guest;

    do
    {
        cout << "\n What do you want to do:";
        cout << "\n1.Entry of guest ";
        cout << "\n2.Check info of guest ";
        cout << "\n3.Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            // phase of entry
            cout << "\n Entry phase ";
            cout << "\n ============";
            cout << "\nEnter the guest's name :";
            cin >> G_name;
            // entry in structure
            cout << "\n Enter The Guest's Cnic Number:";
            cin >> Guest.g_Nic;
            cout << "\n Assign a room number to the Guest ";
            cin >> Guest.R_No;
            cout << "\n Assign a floor number to the Guest ";
            cin >> Guest.f_No;
            cout << "\n Any Balance to collect :";
            cin >> Guest.Bal;
            break;

        case 2:
            // recall phase
            cout << "\nThe name of guest :" << G_name;
            cout << "\nThe CNIC Number of :" << G_name << " is " << Guest.g_Nic;
            cout << "\nThe Room Number of: " << G_name << " is " << Guest.R_No;
            cout << "\nThe Floor Number of:" << G_name << " is " << Guest.f_No;
            cout << "\nThe Remaining Balance of: " << G_name << " is " << Guest.Bal;
            cout << "\nThe Case Number of: " << G_name << " is " << Guest.Cid;
            break;

        case 3:
            cout << "\nExiting the program." << endl;
            break;

        default:
            cout << "\nInvalid choice! Please try again." << endl;
            break;
        }

    } while (choice != 3);

    return 0;
}
