#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;
int util(ll a[],ll i,ll j)
{
    ll k;
    ll ans=INT_MAX;
    ll cnt=0;
    for(k=i;k<j;k++)
    {
        cnt=util(a,i,k)+util(a,k+1,j)+a[i-1]*a[k]*a[j];
        if(cnt<ans)
        {
            ans=cnt;
        }
    }
    return cnt;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll i,j;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll cnt=util(a,1LL,n-1);
        cout<<cnt<<endl;
    }
}