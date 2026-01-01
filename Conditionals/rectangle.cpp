#include <iostream>
using namespace std;
int main()
{
    int l, b, a, p;
    cout << "Enter the length and breadth of a rectangle: ";
    cin >> l >> b;

    a = l * b;
    p = 2 * (l + b);

    if (a > p)
    {
        cout << "Area is greater than the perimeter.";
    }
    else
    {
        cout << "Perimeter is greater than the area of rectangle.";
    }
    return 0;
}