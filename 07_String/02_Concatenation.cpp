#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "Hello ";
    string b;
    cout << "Enter your name: ";
    cin >> b;
    string c = " Goodmorning.";

    string full = a + b + c;
    cout << endl;

    cout << full;

    cout << endl;
    string full2 = a.append(b);
    cout << full2;
}