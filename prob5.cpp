#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n;
    cin>>n;
    ll a[n];
    ll i,j;
    //set <int> s;
    map <ll,ll> mp;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        //s.insert(a[i]);
    }
    ll index;
    ll ans=n-1;
    for(i=0;i<n;++i)
    {
        bool flag=true;
        for(j=0;j<i;++j)
        {
            mp[a[j]]++;
            if(mp[a[j]]==2)
            {
                flag=false;
                break;
            }
        }
        index=n;
        for(j=n-1;j>=i;--j)
        {
            mp[a[j]]++;
            if(mp[a[j]]==1)
            {
                index=j;
            }
            else
            {
                break;
            }
        }
        if(flag)
        {
            ans=min(ans,index-i);
        }
        mp.clear();
    }
    cout<<ans;
}
