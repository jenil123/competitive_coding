#include <bits/stdc++.h>
#define ll long long int
using namespace std;

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
    ll odd=0,even=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    //cout<<even<<" "<<odd;
    ll score=0;
    ll diff;
    //diff=abs(even-odd);
    score=min(odd,even);
    cout<<score;
}