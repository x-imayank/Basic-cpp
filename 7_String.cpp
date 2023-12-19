#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello!";
    cout << s[1] << endl; // Second letter of string.
    int len = s.size();

    cout << s[len - 1] << endl; // print Last letter of string.

    cout << len << endl;

    s[len - 1] = 'k';   // Changing the last letter of string
    cout << s[len - 1]; // Printing the new last letter of a string.
}