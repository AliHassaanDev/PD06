#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
string calculateHostalPrices(string month, float numberOfStays);
int main()
{
    string month;
    int numberOfStays;
    cout << "Enter any month name(May to October): ";
    cin >> month;
    cout << "Enter number of stays: ";
    cin >> numberOfStays;
    string output = calculateHostalPrices(month, numberOfStays);
    cout << fixed << setprecision(6) << output;
}
string calculateHostalPrices(string month, float numberOfStays)
{
    float studioPrice, apartmentPrice, studioTotal, apartmentTotal;
   
    if (month == "May" || month == "October")
    {
        apartmentPrice = 65 * numberOfStays;
        studioPrice = 50 * numberOfStays;

        if (numberOfStays > 7)
        {
            studioTotal = studioPrice - (studioPrice * 5) / 100;
        }
        if (numberOfStays > 14)
        {
            studioTotal = studioPrice - (studioPrice * 30) / 100;
        }
    }
    else if (month == "June" || month == "September")
    {
        apartmentPrice = 68.70 * numberOfStays;
        studioPrice = 75.20 * numberOfStays;
        if (numberOfStays > 14)
        {
            studioTotal = studioPrice - (studioPrice * 20) / 100;
        }
        else
        {
            studioTotal = studioPrice;
        }
    }
    else if (month == "July" || month == "August")
    {
        apartmentPrice = 77 * numberOfStays;
        studioPrice = 76 * numberOfStays;
        studioTotal = studioPrice;
    }
    if(numberOfStays>14)
    {
        apartmentTotal = apartmentPrice - (apartmentPrice * 10) / 100;
    }
    else
    {
        apartmentTotal = apartmentPrice;
    }
    return "Apartment: " + to_string(apartmentTotal)+"$" + "\nStudio: " + to_string(studioTotal)+"$";
}