#include<iostream>
using namespace std;
string decideActivity(string temperature ,string humidity);
int main()
    {
        string act,temperature,humidity;
        cout<<"Enter temperature(warm or cold):";
        cin>>temperature;
        cout<<"Enter humidity(dry or humid):";
        cin>>humidity;
        act=decideActivity(temperature,humidity);
        cout<<"Recommended activity: "<<act;
    }

string decideActivity(string temperature ,string humidity)
{
    if(temperature== "warm" && humidity== "dry")
    {
        return "Play Tennis!";
    }
    if(temperature=="warm" && humidity=="humid")
    {
        return "Swim";
    }
    if(temperature=="cold" && humidity=="dry")
    {
        return "Play Basketball";
    }
    if(temperature=="cold" && humidity=="humid")
    {
        return "Watch tv";
    }
    return 0;
}