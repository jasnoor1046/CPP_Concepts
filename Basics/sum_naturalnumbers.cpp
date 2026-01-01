#include <iostream>
using namespace std;

int main()
{
    int n;
    long long sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    // using formula for the sum of squares
    sum = (n * (n + 1) * (2 * n + 1)) / 6;
    cout << "The sum of squares of the first " << n << " natural numbers is: " << sum << endl;
    return 0;
}