#include <iostream>
#include<iomanip>
using namespace std;
float calculateFruitPrice(string fruit,string dayOfWeek,double quantity);
int main()
{
  string fruit,dayOfWeek;
  double quantity,total;
  cout<<"Enter  fruit name: ";
  cin>>fruit;
  cout<<"Enter the day of the week(e.g.,Sunday): ";
  cin>>dayOfWeek;
  cout<<"Enter the quantity: ";
  cin>>quantity;
  total=calculateFruitPrice(fruit,dayOfWeek,quantity);
  cout<<fixed<<setprecision(2)<<total; 
}
float calculateFruitPrice(string fruit,string dayOfWeek,double quantity)
{
    double totalPrice;
    if(dayOfWeek=="Saturday"||dayOfWeek=="Sunday")
    {
        if(fruit=="banana")
        {
            totalPrice=2.70*quantity;
        }
        else if(fruit=="apple")
        {
            totalPrice=1.25*quantity;
        }
        else if(fruit=="orange")
        {
            totalPrice=0.90*quantity;
        }
        else if(fruit=="grapefruit")
        {
            totalPrice=1.60*quantity;
        }
        else if(fruit=="kiwi")
        {
            totalPrice=3.00*quantity;
        }
        else if(fruit=="pineapple")
        {
            totalPrice=5.60*quantity;
        }
        else if(fruit=="grapes")
        {
            totalPrice=4.20*quantity;
        }
        else
        {
            cout<<"Error"<<endl;
        }
    }
    else if(dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday")
    {
        if(fruit=="banana")
        {
            totalPrice=2.50*quantity;
        }
        else if(fruit=="apple")
        {
            totalPrice=1.20*quantity;
        }
        else if(fruit=="orange")
        {
            totalPrice=0.85*quantity;
        }
        else if(fruit=="grapefruit")
        {
            totalPrice=1.45*quantity;
        }
        else if(fruit=="kiwi")
        {
            totalPrice=2.70*quantity;
        }
        else if(fruit=="pineapple")
        {
            totalPrice=5.50*quantity;
        }
        else if(fruit=="grapes")
        {
            totalPrice=3.85*quantity;
        }
        else
        {
            cout<<"Error"<<endl;
        }
   }
   else
   {
       cout<<"Error"<<endl;
   }
   return totalPrice;
}