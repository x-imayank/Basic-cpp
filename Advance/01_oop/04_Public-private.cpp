#include <bits/stdc++.h>
using namespace std;

class employee
{
private:

   int a, b, c;

public:

   int d, e;

   void setData(int a, int b, int c); // Declaration
   void getData()
   {
      cout << "The value of a is " << a << endl;
      cout << "The value of b is " << b << endl;
      cout << "The value of c is " << c << endl;
      cout << "The value of d is " << d << endl;
      cout << "The value of e is " << e << endl;
   }
};

void employee ::setData(int a1, int b1, int c1)
{
   a = a1;
   b = b1;
   c = c1;
}

int main()
{
   employee computer;
   // computer.a = 231; --> We are not use private data directly.
   computer.d = 12;
   computer.e = 32;
   computer.setData(1, 5, 3);
   computer.getData();

   return 0;
}