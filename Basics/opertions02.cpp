#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    cout << x++ << " " << ++x; /* x++ is post increment, variables's current value is used in the expression first
    then it is incremented; whereas ++x increments the variable's value before the expression is evaluated.
    */
    return 0;
}