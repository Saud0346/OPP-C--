#include <iostream>
#include "p1.h"
using namespace std;


void Time :: setTime(int h,int m,int s)
{
    hour = (h>=0&h<24)?h :0;
    minute = (m>=0&m<60)?m :0;
    sec = (s>=0&s<60)?s :0;

}

void Time :: printMilitary()
{
    cout << "The time is " 
    << hour <<  " : " << minute << " : " << sec << endl; 
}

void Time :: printStandard()
{
    string ampm="am";
    if (hour>12)
    {
        hour = hour-12;
        ampm = "pm";
    }
        
    
    cout << "The time is "
    << hour << " : " << minute << " : " << sec << " "<< ampm;
    
}

int main()
{
    Time mytime;
    mytime.setTime(14,13,50);
    mytime.printMilitary();
    mytime.printStandard();

    return 0;
}