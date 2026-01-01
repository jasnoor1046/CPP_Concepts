#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter an integer between 65 and 90: ";
    cin >> a;
    cout << "The corresponding uppercase letter is : " << static_cast<char>(a) << endl;
    return 0;
}