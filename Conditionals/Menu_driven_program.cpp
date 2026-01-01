#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Welcome to converter\n\n";
    cout << "Enter your choice: \n1.cm to ft\n2.km to miles\n3.USD to INR\n4.exit the program\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        float cm, ft;
        cout << "Enter length in cm: ";
        cin >> cm;
        ft = cm / 30.48;
        cout << ft;
        break;
    case 2:
        float km, miles;
        cout << "Enter length in km: ";
        cin >> km;
        miles = km / 1.609;
        cout << miles;
        break;

    case 3:
        float USD, INR;
        cout << "Enter USD: ";
        cin >> USD;
        INR = USD * 86.95;
        cout << INR;
        break;

    default:
        exit(0);
    }

    return 0;
}