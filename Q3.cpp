// Problem Statement.
/*
     A Pythagorean triplet is a set of three natural numbers, a < b < c, for which, a2 + b2 = c2
     For example, 32 + 42 = 9 + 16 = 25 = 52. There exists exactly one Pythagorean triplet for which
     a + b + c = 1000. Find the product abc.
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long  long
int main()
{
    for(ll i=1;i<998;i++) {
        for(ll j=i+1;j<999;j++)
        {
            ll k=(1000-i-j);
            if(i*i + j*j == k*k)
            {
                cout<<i*j*k<<"\n"; return 0;
            }
        }
    }
    return 0;
}

// Final Answer : 31875000