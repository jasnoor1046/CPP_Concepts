#include <iostream>
using namespace std;
int main()
{
    // to check the character entered by the user is alphabet,digit or a special character
    char ch;

    cout << "Enter any character: ";
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << "It is an alphabet .";
    }
    else if ((ch >= '0' && ch <= '9'))
    {
        cout << "It is a number.";
    }
    else
    {
        cout << "It is a special character.";
    }
    return 0;
}