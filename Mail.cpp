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
    vector<string> Days_of_the_week; /* A list of the days in the week*/
        Days_of_the_week.push_back("Monday");
        Days_of_the_week.push_back("Tuesday");
        Days_of_the_week.push_back("Wednesday");
        Days_of_the_week.push_back("Thursday");
        Days_of_the_week.push_back("Friday");
        Days_of_the_week.push_back("Saturday");
        Days_of_the_week.push_back("Sunday");
    if (Total_of_days<Day_week) /* If is less than 7 than there is nothing to do */
        {
            Day_of_delivery=Total_of_days;
            Day_of_delivery--; /* Needs to subtract one because the vector starts on 0 and goes up to 6*/
        }
    else /* If is greater than 7 than its the rest of Total days divided by the days of the week*/
        {
            Day_of_delivery=(Total_of_days%Day_week);
            Day_of_delivery--; /* Needs to subtract one because the vector starts on 0 and goes up to 6*/
        }
    cout << Days_of_the_week[Day_of_delivery] << endl; /*Than prints the Day of the week that is going to be delivered */
return 0;
}