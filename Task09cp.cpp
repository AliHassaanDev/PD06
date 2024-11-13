#include <iostream>
using namespace std;
string checkPointPosition(int h, int x, int y);
main()
{
    int h,x,y;
    cout<<"Enter Height:";
    cin>>h;
    cout<<"Enter x coordinate:";
    cin>>x;
    cout<<"Enter y coordinate:";
    cin>>y;
    string result=checkPointPosition(h, x, y);
    cout<<result;
}
string checkPointPosition(int h, int x, int y)
{
    string position;
    if(((x==0 || x==h*3) && y<=h) || (y==0 && x<=h*3) || ((x==h || x==h*2) && (y>=h && y<=h*4)) || (y==h && (x>=h ||(x>=h*2 && x<=h*3))))
    {
        position= "Border";
    }
    else if(((y<h && y>0) && (x>0 && x<h*3)) || ((x>h && x<h*2) && (y>h && y<h*4)))
    {
        position= "Inside";
    }
    else
    {
        position= "Outside";
    }
    return position;    
}