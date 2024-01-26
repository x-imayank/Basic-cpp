#include <iostream>
#include <string>
using namespace std;

class Parameters
{
public:
   int year;
   string name;
   string model;
   Parameters(int x, string y, string z);
};

Parameters::Parameters(int x, string y, string z)
{
   year = x;
   name = y;
   model = z;
}

int main()
{
   Parameters names1(1989, "BMW", "XYZ");
   Parameters names2(1909, "Ford", "XYZ");

   cout << names1.year << " " << names1.name << " " << names1.model << endl;
   cout << names2.year << " " << names2.name << " " << names2.model << endl;
}
