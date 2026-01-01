#include <iostream>
using namespace std;

int main()
{
    float num;
    int intnum;
    cout << "Enter floating point integer: ";
    cin >> num;
    intnum = static_cast<int>(num);
    cout << "original:" << num << ", Typecasted to integer: " << intnum << endl;
    return 0;
}