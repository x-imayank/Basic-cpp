#include <iostream>
using namespace std;

int glo = 4;
void Global()
{
    int a;
    cout << glo;
}

int main()
{
    int glo = 79;
    glo = 43;


    cout<<glo << " ";
    Global();
}

// The first priority is for local variable then global variable.