// library management system in c++ 

#include <iostream>
using namespace std;
int main()
{
    long long phoneNumber;
    string name;
    int entryTiming;
    int choice;
    cout << "\n";
    do
    {
        cout << " -----------------------1. for register user" << endl
             << " -----------------------2. show user" << endl
             << " -----------------------3. for exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Your Name : ";
            cin >> name;
            cout << "Enter your Phone number : ";
            cin >> phoneNumber;
            cout << "Enter Entry Timing : ";
            cin >> entryTiming;
            break;
        case 2:
            cout << name << endl;
            cout << phoneNumber << endl;
            cout << entryTiming << endl;
            break;
        case 3:
            cout << "The program is ended" << endl;
            choice = 3;
            break;
        default:
            cout << "you choose wrong option " << endl;
            break;
        }
    } while (choice != 3);
