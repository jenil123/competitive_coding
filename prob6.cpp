#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector <ll> a(3);
        vector <ll> c(3);
        ll i,j;
        for(i=0;i<3;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<3;i++)
        {
            cin>>c[i];
        }
        ll count=0;
        if(a[0]>a[1]&&c[0]>c[1])
        count++;
        else if(a[0]<a[1]&&c[0]<c[1])
        count++;
        else if(a[0]==a[1]&&c[0]==c[1])
        count++;
        else{}
        if(a[1]>a[2]&&c[1]>c[2])
        count++;
        else if(a[1]<a[2]&&c[1]<c[2])
        count++;
        else if(a[1]==a[2]&&c[1]==c[2])
        count++;
        else{}
        if(a[0]>a[2]&&c[0]>c[2])
        count++;
        else if(a[0]<a[2]&&c[0]<c[2])
        count++;
        else if(a[0]==a[2]&&c[0]==c[2])
        count++;
        else{}
        if(count==3)
        cout<<"FAIR"<<endl;
        else
        cout<<"NOT FAIR"<<endl;
    }
}