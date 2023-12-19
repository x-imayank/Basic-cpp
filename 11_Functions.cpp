#include <bits/stdc++.h>
using namespace std;
// Function are set of code which performs something for you.
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not return anything.
// return
// parameterised
// non parameterised

// Void
void printName()
{
    cout << "Hello world!";
}

int main()
{
    printName();
    return 0;
}

// Parametrised
void printName(string name)
{
    cout << "Hello " << name << endl;
}

int main()
{
    string name;
    cin >> name;

    string name2;
    cin >> name2;

    printName(name);
    printName(name2);
}

// Non parametrised
int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    return num3;
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int res = sum(num1, num2);
    cout << res;
    return 0;
}

// Pass by value
void doSomething(int num)
{
    cout << num << endl; // 10
    num += 5;
    cout << num << endl; // 10 + 5 - 15
    num += 5;
    cout << num << endl; // 15 + 5 - 20
}

int main()
{
    int num;
    cin >> num; // e.g - 10
    doSomething(num);
    cout << num << endl; // 10
}

// Pass by reference



void doSomething(string &s) // & denotes pass by reference.
{
    s[0] = 'N';
    cout << s << endl; // Nithub
}

int main()
{
    string s = "Github";
    doSomething(s);
    cout << s << endl; // Nithub
    return 0;
}

// Difference 

void doSomethings(string s) 
{
    s[0] = 'N';
    cout << s << endl; // Nithub
}

int main()
{
    string s = "Github";
    doSomethings(s);
    cout << s << endl; // Github
    return 0;
}