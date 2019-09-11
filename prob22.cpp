#include <bits/stdc++.h>
#include <cmath>
#define ll long long int
using namespace std;
bool compare(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return a.first-a.second>=b.first-b.second;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,cx;
        cin>>n>>cx;
        pair <ll,ll> a[n];
        ll i,j;
        for(i=0;i<n;i++)
        {
            cin>>a[i].first>>a[i].second;
        }
        sort(a,a+n,compare);
        // for(i=0;i<n;i++)
        // {
        //     cout<<a[i].first<<" "<<a[i].second<<endl;
        // }
        //cout<<endl;
        ll x=cx;
        ll xp=cx;
        i=0;
        ll diff;
        ll count=0;
        bool flag=false;
        // while(i<n)
        // {
        //     diff=min(x,a[i].first);
        //     x=x-diff;
        //     count++;
        //     if(x>=1)
        //     {
        //         x+=a[i].second;
        //     }
        //     //cout<<x<<endl;
        //     if(x==0)
        //     {
        //         cout<<count<<endl;
        //         flag=true;
        //         break;
        //     }
        //     if(x<xp)
        //     {
                
        //         //count++;
        //     }
        //     else if(x=xp)
        //     {
        //         //count++;
        //         i++;
        //     }
        //     else
        //     {
        //         count=0;
        //         x=cx;
        //         xp=x;
        //         i++;
        //     }
        // }
        // //count=0;
        // if(flag==false)
        // cout<<-1<<endl;
        
        ll dp[n];
        ll sum=0;
        for(i=0;i<n;i++)
        {
            dp[i]=a[i].first-a[i].second;
            if(dp[i]>0)
            {
                sum+=dp[i];
            }
        }
        sort(a,a+n);
        ll ans;
        if(sum==0&&a[n-1].first<cx)
        {
            cout<<-1<<endl;
        }
        else if(a[n-1].first>=cx)
        {
            cout<<1<<endl;
        }
        else
        {
            ll ans;
            cx=cx-a[n-1].first;
            //cout<<cx<<" "<<endl;
            if(cx%dp[0]==0)
            {
                ans=1+cx/dp[0];
            }
            else
            {
                ans=2+cx/dp[0];
            }
            cout<<ans<<endl;
        }
    }
}