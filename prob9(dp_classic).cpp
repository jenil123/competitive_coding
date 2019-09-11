#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector <ll> a(n);
        ll i,j;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll days=0;
        vector <ll> b(n);
        b[n-1]=a[n-1];
        for(i=n-2;i>=0;i--)
        {
            b[i]=min(a[i],b[i+1]);
        }
        // for(i=0;i<n;i++)
        // {
        //     cout<<b[i]<<" ";
        // }
         for(j=0;j<n;j++)
        {
            if(a[j]>b[j])
            days++;
        }
        cout<<days<<endl;
    }
}