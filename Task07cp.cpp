#include<iostream>
#include<string>
using namespace std;
string checkStudentStatus(int examHour,int examMinutes,int studentHour,int studentMinutes);
int main()
{
    int examHour,examMinutes,studentHour,studentMinutes;
    string result;
    cout<<"Enter exam starting time(hour): ";
    cin>>examHour;
    cout<<"Enter exam starting time(minutes): ";
    cin>>examMinutes;
    cout<<"Enter student hour of arrival: ";
    cin>>studentHour;
    cout<<"Enter minutes of arrival: ";
    cin>>studentMinutes;
    result=checkStudentStatus(examHour,examMinutes,studentHour,studentMinutes);
    cout<<result;
}
string checkStudentStatus(int examHour,int examMinutes,int studentHour,int studentMinutes)
{
    string status;
    int examTime=(examHour*60)+examMinutes;
    int arriveTime=(studentHour*60)+studentMinutes;
    int timeDiff=examTime-arriveTime;
    int hour=timeDiff/60;
    int minutes=timeDiff%60;
    if(timeDiff<=30 && timeDiff>=0)
    {
        status= "On time.\n"+to_string(minutes)+" minutes before exam.";

    }
    else if(timeDiff>30)
    {
        status= "Early.\n"+to_string(hour)+" hours and "+to_string(minutes)+" minutes before the exam.";
        
    }
    else if(arriveTime-examTime>0)
    {
        int hour=-timeDiff/60;
        int minutes=-timeDiff%60;
        status= "Late.\n"+to_string(hour)+" hours and "+to_string(minutes)+" minutes after the exam.";
    }
    return status; 
}