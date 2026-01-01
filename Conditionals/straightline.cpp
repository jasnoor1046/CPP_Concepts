#include <iostream>
using namespace std;
int main()
{
    // program to check if three points lie on a straight line
    float x1, y1, x2, y2, x3, y3;
    cout << "Enter the coordinates of first point: ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of second point: ";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of third point: ";
    cin >> x3 >> y3;
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1))
    {
        cout << "the points lie on the straight line." << endl;
    }
    else
    {
        cout << "The points does not lie on the straight line." << endl;
    }
    return 0;
}