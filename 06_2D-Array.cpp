#include <bits/stdc++.h>
using namespace std;

// 2D array

int main()
{
    int arr[2][4]; // First one is the row and second one is the column of an array;
    cin >> arr[0][0] >> arr[0][1] >> arr[0][2] >> arr[0][3] >> arr[1][0] >> arr[1][1] >> arr[1][2] >> arr[1][3];

    cout << arr[0][0] << arr[0][1] << arr[0][2] << arr[0][3] << endl;
    cout << arr[1][0] << arr[1][1] << arr[1][2] << arr[1][3] << endl;

    cout << arr[2][4]; // It throws some garbage value because it wasn't initialize.
}