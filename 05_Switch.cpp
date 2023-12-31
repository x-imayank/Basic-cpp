#include <bits/stdc++.h>
using namespace std;


//Take 1 to 7 for printing day by number.
int main()
{
    int day;

    cout << "Enter the day number: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Enter valid number";
    }


    return 0;
}