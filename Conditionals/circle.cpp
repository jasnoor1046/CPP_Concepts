#include <iostream>
using namespace std;
int main()
{
    float A, C, r, pi = 3.14;
    cout << "Enter the radius of circle: ";
    cin >> r;

    A = pi * r * r;
    C = 2 * pi * r;

    cout << "The area of the circle is: " << A << endl;
    cout << "The circumference of the circle is: " << C << endl;

    if (A > C)
    {
        cout << "Area of the circle is radius is greater than the circumference";
    }
    else
    {
        cout << "Circumference of the circle is greater than its area";
    }
    return 0;
}
