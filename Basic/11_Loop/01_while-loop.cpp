#include <iostream>
using namespace std;

int main()
{
   int a, i = 1, sum = 0;

   cout << "Enter the last digit: ";
   cin >> a;

   while (i <= a)
   {
      sum = sum + i;
      i = i + 1;
   }

   cout << sum << endl;

   return 0;
}