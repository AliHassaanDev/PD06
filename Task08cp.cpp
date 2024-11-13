#include <iostream>
using namespace std;
int calculateVolleyBallGames(string yearType, int holidays, int homeTownWeekends);
main()
{
    int holidays,homeTownWeekends,result;
    string yearType;
    cout<<"Enter year type (normal/leap):";
    cin>>yearType;
    cout<<"Enter number of holidays:";
    cin>>holidays;
    cout<<"Enter number of weekends:";
    cin>>homeTownWeekends;
    result=calculateVolleyBallGames(yearType,holidays,homeTownWeekends);
    cout<<result;
}
int calculateVolleyBallGames(string yearType, int holidays, int homeTownWeekends)
{
    float playCount;
    float playTotal;
    playCount=(((48.0-homeTownWeekends)*3.0)/4.0)+((2.0*holidays)/3.0)+homeTownWeekends;
    if(yearType=="normal"){
        playTotal=playCount;
    }
    if(yearType=="leap")
    {
        playTotal=playCount+((playCount*15.0)/100.0);
    }
    return playTotal;
}