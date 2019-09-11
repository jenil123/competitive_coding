#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
ll gcd(ll a,ll b)
{
    if(a==0)
    return b;
    else
    return gcd(b%a,a);
}
ll findGCD(ll arr[], ll n) 
{ 
    ll m =arr[0]; 
  
    // Count divisors of n. 
    ll result = 0; 
    for(ll j=1;j<n;j++)
    {
        m=gcd(m,arr[j]);
    }
        for (ll i=1; i<=sqrt(m); i++) 
        { 
        // if 'i' is factor of n 
            if (m%i==0) 
            { 
            // check if divisors are equal 
                if (m/i == i) 
                    result += 1; 
                else
                    result += 2; 
            } 
        }
    return result; 
}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<findGCD(a,n);
}