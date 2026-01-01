// Take 2 integers input and print greatest of them
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    if (a > b)
    {
        cout << "a is greater than b";
    }
    else
    {
        cout << "b is greater than a";
    }
    return 0;
}