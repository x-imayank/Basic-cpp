#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*string fullName;
    cout << "Enter your full name: ";
    cin >> fullName;

    cout << fullName; */ // It returns only first name not full name.

    cout << endl;
    string fullName2;
    cout << "Enter your full name: ";
    getline(cin, fullName2); // getline returns full name.
    cout << fullName2;
}