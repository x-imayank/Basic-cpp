#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int ,long, long long, float, double
    // string and getline
    // char

    int x = 10; // int contains limited range of datatype to store.

    long y; // long contains wider range of datatype to store.
    cin >> y;
    cout << y << endl;

    long long z = 15000000000; // long long contains much wider range of datatype to store.
    cout << z;

    // Float,double
    float a = 5.82;
    cout << a;
    

    string s1, s2;
    cout << "Enter the Sentence";
    cin >> s1;                       // Input from user in s1.
    cin >> s2;                       // Input from user in s2.
    cout << s1 << " " << s2 << endl; // This will exit the s1 and s2 with containing the space.

    string str;
    getline(cin, str); // This is for taking all the word in a line.
    cout << str;

    char ch = 'H'; // It takes single character of a word.
    cout << ch;

    return 0;
}