#include <iostream>
#include <string>
using namespace std;

class officeSalary
{
private:
   int salary;

public:
   // By the help of get and set we read or modify the private class.
   void setSalary(int s)
   {
      salary = s;
   }

   int getSalary()
   {
      return salary;
   }
};

int main()
{
   officeSalary sal;
   sal.setSalary(50000);
   cout << sal.getSalary();

   return 0;
}