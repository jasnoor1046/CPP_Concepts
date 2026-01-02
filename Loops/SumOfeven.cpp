#include <iostream>
using namespace std;

int main()
{
    // to calculate the sum of even digits of a number
    int n, r, sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        if (r % 2 == 0)
            sum = sum + r;
    }
    cout << sum;
    return 0;
}
