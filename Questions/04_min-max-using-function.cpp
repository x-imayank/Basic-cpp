#include <bits/stdc++.h>
using namespace std;


int maxx(int num1,int num2){
    if (num1 >= num2) return num1;
    else return num2;
    
}
int minn(int num1,int num2){
    if (num1 >= num2) return num2;
    else return num1;
    
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int minimum = min(num1, num2);
    cout << "Minimum is " << minimum << endl;
    int maximum = maxx(num1, num2);
    cout << "Maximum is " << maximum << endl;
}