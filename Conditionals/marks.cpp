#include <iostream>
using namespace std;
int main()
{
    int a, b, c, least, marks; // marks of the students to tell which are  least
    cout << "enter the marks of a student: ";
    cin >> a >> b >> c;

    if (a < b && a < c)
    {
        cout << "Student a scored the least.";
    }
    else if (b < a && b < c)
    {
        cout << "Student b scored less.";
    }
    else
    {
        cout << "student c scored less.";
    }
    return 0;
}