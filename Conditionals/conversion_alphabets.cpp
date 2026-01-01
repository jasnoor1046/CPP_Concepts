#include <iostream>
using namespace std;
int main()
{
    // converting lower case letter to upper case
    char ch;
    cout << "Enter a letter in small case: ";
    cin >> ch;
    int ch1 = int(ch);
    if (ch >= 97 && ch <= 122)
    {
        ch1 = ch1 - 32;
    }
    char ch2 = char(ch1);
    cout << ch2;

    return 0;
}