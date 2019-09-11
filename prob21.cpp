#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll mul(ll a,ll b)
{
    return (a*b);
}
int main()
{
    ll n,l,r;
    cin>>n>>l>>r;
    ll a[n];
    ll min=0,max=0;
    ll i,j;
    ll po[n];
    po[0]=1;
    po[1]=2;
    for(i=2;i<n;i++)
    {
        po[i]=mul(po[i-1],2);
    }
    ll  count=l;
    i=0;
    j=n-1;
    while(count>=2)
    {
        a[j]=po[count-1];
        j--;
        count--;
    }
    for(i=0;i<=j;i++)
    {
        a[i]=1;
    }
    for(i=0;i<n;i++)
    {
        min+=a[i];
    }
    count=0;
    j=1;
    i=0;
    while(j<=r)
    {
        a[i]=po[i];
        i++;
        j++;
    }
    count=i-1;
    for(j=i;j<n;j++)
    {
        a[j]=po[count];
    }
    for(i=0;i<n;i++)
    {
        max+=a[i];
    }
    cout<<min<<" "<<max;
}