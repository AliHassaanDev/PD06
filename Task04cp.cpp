#include <iostream>
using namespace std;
string serviceCode(char code);
float dueAmount(char code, char time,float min);
int main()
{  
    char code,time;
    float min,price;
    string service;
    cout<<"Enter service code(R/r for regular, P/p for premium):";
    cin>>code;
    if(code=='P' || code=='p')
    {
    cout<<"Enter time of call(D/d for day,N/n for night):";
    cin>>time;
    }
    cout<<"Enter number of minutes used:";
    cin>>min;
    service=serviceCode(code);
    cout<<"Service Code: "<<service<<endl;
    cout<<"Total minutes used: "<<min<<" minutes"<<endl;
    price=dueAmount(code,time,min);
    cout<<"Amount Due: $"<<price;
}
string serviceCode(char code)
{
 return "Premium";
 if (code=='R' ||code=='r')
 {
   return "Regular";
 } 
}
float dueAmount(char code, char time,float min)
{
    float total;
   if(code=='R' ||code=='r')
   {
       if(time>50)
       {
            total=10+(min-50)*0.20;
       return total;
       }
       else
       {
            total=10;
       }
   }
   if(code=='p'||code=='P')
   {
    if(time=='D'||time=='d')
    {
        if(min>75)
        {
            total=25+(min-75)*0.10;
        }
        else
        {
            total=25;
        }
    }
    if(time=='N'||time=='n')
    {   
        if(min>100)
        {
            total=25+(min-100)*0.05;
        }
        else
        {
            total=25;
        }
    }
   }
   return total;
}