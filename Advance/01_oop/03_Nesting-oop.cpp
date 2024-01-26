#include <iostream>
#include <string>
using namespace std;

class binary
{
   string s;

public:
   void read(void);    // Declaretion
   void chk_bin(void); // Declaretion
   void ones(void);
};

void binary ::read(void)
{
   cout << "Enter a binary number: " << endl;
   cin >> s;
}

void binary ::chk_bin(void)
{
   for (int i = 0; i < s.length(); i++)
   {
      if (s.at(i) != '0' && s.at(i) != '1')
      {
         cout << "Incorrect binary format." << endl;
         exit(0);
      }
   }
}

void binary::ones(void)
{
   for (int i = 0; i < s.length(); i++)
   {
      if (s.at(i) == '0')
      {
         cout << (s.at(i) == '1');
      }
      if (s.at(i) == '1')
      {
         cout << (s.at(i) == '0');
      }
   }
}

int main()
{
   binary b;
   b.read();
   b.chk_bin();
   b.ones();
}

// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// Class --> extension of structure (in C)
//       --> members are public
//       --> No methods
// Classes = structures + more
// Classes can hame methods and properties
// Classes --> can make few members as private & few as public
// Structure in C++ are typedefed. we use without initialise with typedef

// Nesting of member function.