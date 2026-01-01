#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int legs, head, c, d;

    cout << "Enter heads: ";
    cin >> head;
    cout << "Enter legs: ";
    cin >> legs;
    c = (2 * head - 0.5 * legs);
    d = 4 - c;
    cout << "Total chickens are: " << c << " and dogs are: " << d;
    return 0;
}