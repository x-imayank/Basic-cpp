#include <bits/stdc++.h>
using namespace std;

class parameter
{
public:
     int a, b, c;
     void parame(int x, int y, int z);
     void display()
     {
          cout << a << b << c;
     }
};

void parameter::parame(int x, int y, int z)
{
     a = x;
     b = y;
     c = z;
}

int main()
{
     parameter p;
     p.parame(1, 2, 3);
     p.display();
}