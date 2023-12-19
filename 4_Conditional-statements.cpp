#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a; // Taking input from the user.
    cin >> b; //      ''
    cout << endl;
    if (a > b) // It checks the number which is greater.
    {
        cout << a << " is greater than " << b << endl;
    }
    else
    {
        cout << b << " is greater than " << a << endl;
    }

    return 0;
}