#include <iostream>
using namespace std;
int main()
{
    // Program to tell whether the year entered by the user is leap year
    int year;
    cout << "Enter the year: ";
    cin >> year;
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        cout << year << " is a leap year.";
    }
    else
    {
        cout << year << " is not a leap year.";
    }
    return 0;
}
