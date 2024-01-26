#include <iostream>
#include <string>
using namespace std;

class myClasses
{
public:
   int myNum;
   string mySting;
};

class Cars
{
public:
   string brand;
   int year;
};

int main()
{
   // First class start
   myClasses digits;
   digits.myNum = 12;
   digits.mySting = "CPP";

   cout << digits.myNum << endl;
   cout << digits.mySting << endl;


   // Second Class start
   Cars obj1;
   obj1.brand = "BMW";
   obj1.year = 1984;

   Cars obj2;
   obj2.brand = "Volvo";
   obj2.year = 2007;

   cout << obj1.brand << "\t" << obj1.year << endl;
   cout << obj2.brand << "\t" << obj2.year << endl;
}
