#include <bits/stdc++.h>
using namespace std;

// Write a program that takes an input of age
// and prints if you are adult or not.

int main()
{
    int age;
    cout << "Enter your age here: ";
    cin >> age;

    if (age >= 18)
        cout << "You are an adult.";

    else
        cout << "You are not an adult";

    return 0;
}