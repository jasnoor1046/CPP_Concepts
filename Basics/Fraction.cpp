#include <iostream>
using namespace std;

int main()
{
    int a1, b1, a2, b2, n, d;
    cout << "Enter numerator and denominator of first fraction: ";
    cin >> a1 >> b1;
    cout << "Enter numerator and denominator of second fraction: ";
    cin >> a2 >> b2;
    n = a1 * b2 + a2 * b1;
    d = b1 * b2;

    cout << "The sum of the fractions is: " << n << "/" << d << endl;
    return 0;
}