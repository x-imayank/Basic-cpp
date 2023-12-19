#include <bits/stdc++.h>
using namespace std;

// Check whether the entered character is alphabet or not.

int main()
{
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "It is a vowel";
    }
    else
    {
        cout << "It is a consonent";
    }
    
    return 0;
}