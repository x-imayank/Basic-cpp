#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter your number: ";
    cin >> a >> b >> c;

    int final = a > b ? (a > c ? a : (b > c ? b : c)) : c;
    cout << final;
}