#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll N = (ll)(3e5) + 99;
const ll MOD = 998244353;

bool sortbysec(const pair<ll,ll> &a, 
              const pair<ll,ll> &b) 
{ 
    return (a.second < b.second); 
} 
ll mul(ll a, ll b){
    return (a * 1LL * b) % MOD;
}


ll sum(ll a, ll b){
    return (a + b) % MOD;
}
ll f[N];
int main()
{
    int n;
    cin>>n;
    pair <ll,ll> a[N];
    ll i,j;
    ll temp,temp1;
    f[0] = 1;
    for(i = 1; i < N; ++i)
        f[i] = mul(i, f[i - 1]);
    
    for(i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    map<ll,ll> mp;
    map<ll, ll>::iterator itr;
    ll res;
    res=f[n];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        //cout<<a[i].first<<" ";
        mp[a[i].first]++;
    }
    //cout<<endl;
    ll d=1;
    ll ans=1;
    // for(i=0;i<n;i++)
    // {
    //     //cout<<mp[a[i].first]<<" ";
    //     d=mul(d,mp[a[i].first]);
    //     ans*=d;
    // }
    for (itr = mp.begin(); itr != mp.end(); ++itr) 
    {
        d=mul(d,f[itr->second]);
    }
    res = sum(res, MOD-d);
    //ans=d;
    //cout<<ans<<endl;
    mp.clear();
    ans=1;
    sort(a,a+n,sortbysec);
    for(i=0;i<n;i++)
    {
        mp[a[i].second]++;
    }
    //cout<<ans<<endl;
     d=1;
    for (itr = mp.begin(); itr != mp.end(); ++itr) 
    {
        d=mul(d,f[itr->second]);
    }
    res = sum(res, MOD-d);
    sort(a,a+n);
    //ans+=d;
    //cout<<ans<<endl;
    ll l = 0;
    d = 1;
    while(l < n){
        ll r = l + 1;
        while(r < n && a[l].first == a[r].first) ++r;
        map<ll, ll> m;
        for( i = l; i < r; ++i) ++m[a[i].second];
        for(auto p : m) d = mul(d, f[p.second]);
        l = r;
    }
    //cout<<d<<endl;
    //ans-=d;
    for(i=1;i<n;i++)
    {
        if(a[i-1].second>a[i].second)
        {
            d=0;
        }
    }
    //cout<<ans<<endl;
    //cout<<res<<endl;
    //cout<<d<<endl;
    res = sum(res, d);
    printf("%ld\n", res);
    return 0;
}