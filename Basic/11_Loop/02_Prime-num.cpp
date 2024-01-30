#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a;
   cout << "Enter the number for checking prime number: ";
   cin >> a;
   int i = 1;

   while (i <= a)
   {
      if (a % i == 0)
      {
         cout << "It is a prime number.";
      }
      else
      {
         cout << "It is not a prime number";
      }
      i = i + 1;
   }
}