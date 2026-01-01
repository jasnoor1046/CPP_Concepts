#include <iostream>
using namespace std;
int main()
{
    int x, y; // program  to check if a point lies on the x-axis and y-axis, or the origin
    cout << "Enter the coordinates: ";
    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << "The point lies on the origin(0,0)." << endl;
    }
    else if (x == 0)
    {
        cout << "The point lies on the y-axis." << endl;
    }
    else if (y == 0)
    {
        cout << "The point lies in the x-axix." << endl;
    }
    else
    {
        cout << "The point lies somewhere in the quadrant." << endl;
    }
    return 0;
}