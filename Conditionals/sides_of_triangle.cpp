#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the sides: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "Triangle is equilateral.";
    }
    else if (a == b && b != c)
    {
        cout << "Triangle is isosceles.";
    }
    else
    {
        cout << "Triangle is scalene.";
    }
    return 0;
}