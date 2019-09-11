#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        if(n%3==2)
        {
            cout<<(a^b)<<endl;
        }
        else if(n%3==1)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
    }
}