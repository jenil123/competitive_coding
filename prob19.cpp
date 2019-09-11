#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b,g,n;
    cin>>b>>g>>n;
    int t1=n,t2=0;
    if(b>=n)
    {
        t1=n;
        t2=0;
    }
    else
    {
        t1=b;
        t2=n-b;
    }
    int ans=0;
    while(t1>=0&&t2<=g)
    {
        if(t1+t2==n)
        {
            ans++;
            t1--;
            t2++;
        }
        else 
        {
            break;
        }
    }
    cout<<ans;
}