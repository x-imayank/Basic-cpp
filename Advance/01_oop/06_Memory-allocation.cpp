#include <bits/stdc++.h>
using namespace std;

class shop
{
     int itemId[100];
     int itemPrice[100];
     int counter;

public:
     void intCOunter(void) { counter = 0; }
     void getPrice(void);
     void setPrice(void);
     void displayPrice(void);
};

void shop::getPrice(void)
{
     cout << "Enter Id of your item: " << endl;
     cin >> itemId[counter];
     cout << "Enter Price of your item: " << endl;
     cin >> itemPrice[counter];
     counter++;
}

void displayPrice(void){
     for (int i = 0; i < counter; i++)
     {
          cout<<"The "
     }
     
}