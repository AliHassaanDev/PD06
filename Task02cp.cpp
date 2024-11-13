#include <iostream>
using namespace std; 

float calculateAverage(float english,float maths,float chemistry,float social, float biology);
string calculateGrade(float percentage);
int main()
{
    string name , grade;
    float english,maths,chemistry,social,biology,average;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter marks of English: ";
    cin>>english;
    cout<<"Enter marks of Maths: ";
    cin>>maths;
    cout<<"Enter marks of Social Science: ";
    cin>>social;
    cout<<"Enter marks of Chemistry: ";
    cin>>chemistry;
    cout<<"Enter marks of Biology: ";
    cin>>biology;
    average=calculateAverage(english,maths,chemistry,social,biology);
    grade=calculateGrade(average);
    cout<<"Student name: "<<name<<endl;
    cout<<"Percentage: "<<average<<"%"<<endl;
    cout<<"Grade: "<<grade<<endl;
}
float calculateAverage(float english,float maths,float chemistry,float social, float biology)
{
    float mean;
    mean=((english+maths+chemistry+social+biology)/5.0);
    return mean;
}
 string calculateGrade(float percentage)
{
    if(percentage>=90)
   {
     return"A+";
   }
   if(percentage>=80 && percentage<90)
   {
    return "A";
   }
   if(percentage>=70 && percentage<80)
   {
    return "B+";
   }
   if(percentage>=60 && percentage<70)
   {
    return "B";
   }
   if(percentage>=50 && percentage<60)
   {
    return "C";
   }
   if(percentage>=40 && percentage<50)
   {
    return "D";
   }
   if(percentage<40)
   {
    return "F";
   }
   return 0;
}