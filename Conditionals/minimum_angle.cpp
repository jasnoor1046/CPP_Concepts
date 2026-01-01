#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // minimum angle between hour hand and minute hand of a clock
    // for hour= 12 -> 360 angle, 1 -> 360/12 -> 30
    // for minute= 60->360, 1-> 360/60 -> 6
    int hour, minute; //
    cout << "Enter the hour: ";
    cin >> hour;
    cout << "Enter the minute: ";
    cin >> minute;

    int h_a = hour * 30;
    int m_a = minute * 6;

    int diff = abs(h_a - m_a); // abs converts negative to positive
    if (diff > 100)
        diff = 360 - diff;

    cout << "Minimum angle is: " << diff;

    return 0;
}