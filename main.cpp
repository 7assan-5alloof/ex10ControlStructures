#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop" << endl;

    while (true)
    {
        int year;
        cout << "Enter a year: ";
        cin >> year;

        bool leapYear;
        if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) leapYear = true;
        else leapYear = false;

        cout << year << " is ";
        if (leapYear);
        else cout << "not ";
        cout << "a leap year" << endl;
    }

    return 0;
}
