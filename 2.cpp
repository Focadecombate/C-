#include <iostream>
#include <string>
#include <vector>
using namespace std;
/* 
   Program that determines the day of a delivery. 
   Made by : Gustavo Santos. 
*/
int main()
{
    int Total_of_days, Day_of_delivery;
    cin >> Total_of_days;
    Day_of_delivery=0;
    const int Day_week = 7;
    vector<string> Days_of_the_week;
        Days_of_the_week.push_back("Monday");
        Days_of_the_week.push_back("Tuesday");
        Days_of_the_week.push_back("Wednesday");
        Days_of_the_week.push_back("Thursday");
        Days_of_the_week.push_back("Friday");
        Days_of_the_week.push_back("Saturday");
        Days_of_the_week.push_back("Sunday");
    if (Total_of_days<Day_week)
    {
        Day_of_delivery=Total_of_days;
        Day_of_delivery--;
    }
    else
    {
        Day_of_delivery=Day_of_delivery+(Total_of_days%Day_week);
        Day_of_delivery--;
    }
    cout << Days_of_the_week[Day_of_delivery] << endl;
return 0;
}