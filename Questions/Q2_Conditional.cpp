#include <bits/stdc++.h>
using namespace std;

/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A

Ask the user to enter marks and print the corresponding grade
*/

int main()
{
    int marks;
    cout << "Enter your marks for finding grade: ";
    cin >> marks;

    if (marks < 25)
    {
        cout << "Grade : F";
    }
    else if (marks <= 44)
    {
        cout << "Grade : E";
    }
    else if (marks <= 49)
    {
        cout << "Grade : D";
    }
    else if (marks <= 59)
    {
        cout << "Grade : C";
    }
    else if (marks <= 79)
    {
        cout << "Grade : B";
    }
    else if (marks <= 100)
    {
        cout << "Grade : A";
    }
    else
        cout << "Enter valid number.";

    return 0;
}