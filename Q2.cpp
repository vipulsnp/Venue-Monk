// Problem Statement.
/*
    In India, the currency is made up of different coins and notes.
    There are eight notes in general circulation:10, 20, 50, 100, 200, 500, 1000, and 2000.
    It is possible to make 2000. How many different ways can 2000 be made using any number of notes?
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long  long
int main()
{
    ll change=2000;
    ll denoms[]= {10, 20, 50, 100, 200, 500, 1000, 2000};
    ll dp[change+1];
    for(ll i=0;i<=change;i++)
        dp[i]=0;
    dp[0]=1;

    for(ll i=0;i<8;i++)
    {
        for(ll j=denoms[i];j<=change;j++)
            dp[j]+=dp[j-denoms[i]];
    }
    cout<<dp[change]<<"\n";
}

// Final Answer : 73682