#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,d,e;
    cin>>n>>d>>e;
    e*=5;
    ll ans=n;
    if(e>n)
    {
        cout<<n%d;
    }
    else
    {
        for(ll i=0;i<=n;i=i+e)
        {
            ans=min(ans,(n-i)%d);
        }
        cout<<ans;
    }
}