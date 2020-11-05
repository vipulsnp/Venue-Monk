// Problem Statement.
/*
    You are given the following information, but you may prefer to do some research for yourself.
    1 Jan 1900 was a Monday. Thirty days has September, April, June, and November.
    All the rest have thirty-one, Saving February alone, Which has twenty-eight, rain or shine.
    And on leap years, twenty-nine. A leap year occurs on any year evenly divisible by 4, but not on a
    century unless it is divisible by 400. How many Sundays fell on the first of the month during the
    twentieth century (1 Jan 1901 to 31 Dec 2000)?
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long  long

bool isLeap(ll year) {
    return (year%4 == 0 && (year%100 != 0 || year%400 == 0));
}

ll noOfDays(ll year,ll month) {

    if(month == 1 ||month == 3 ||month == 5 ||month == 7 ||month == 8 ||month == 10 ||month == 12 )
        return 31;
    else if(month == 4 ||month == 6 ||month == 9 ||month == 11 )
        return 30;
    else
    {
        if(isLeap(year))
            return 29;
        return 28;
    }
}

int main()
{
    ll total=0;
    int day=2;  // Starting Day..
    for(ll i=1901;i<=2000;i++){
        for(int j=1;j<=12;j++)
        {
            if(day==0)
              total++;
            day = (day + noOfDays(i,j))%7;
        }
    }

    cout<<total<<"\n";

    return 0;
}

// Final Answer : 171
