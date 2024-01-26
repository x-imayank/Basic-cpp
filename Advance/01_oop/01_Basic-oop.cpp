#include <iostream>
#include <string>
using namespace std;

class myClasses
{
public:
   int myNum;
   string mySting;
};

int main()
{
   myClasses digits;
   digits.myNum = 12;
   digits.mySting = "CPP";

   cout << digits.myNum << endl;
   cout << digits.mySting << endl;
}