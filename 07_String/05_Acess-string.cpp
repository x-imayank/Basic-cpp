#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "Hello";
    cout << a[0];
    cout << a[1];

    a[0] = 'Y';
    cout << endl
         << a; // Yello
}