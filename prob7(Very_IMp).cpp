#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        ll i,j;
        cin>>n>>m;  
        ll k=n*m-1;
        ll p=0,z;
        ll l,ans;
        for(p=0;p<=k;++p)
        {
                l=p+1;
                ans=1+(n*m-1)/l;
            for(z=0;z<k;z+=l)
            {
                if (((z%m)*n+z/m)%l)
						++ans;
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}







//My method
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        ll i,j;
        cin>>n>>m;  
        ll k=n*m-1;
        ll p=0,z;
        ll l,ans;
        for(p=0;p<=k;++p)
        {
                l=p+1;
                ans=1+(n*m-1)/l;
                ans*=2;
                //cout<<((z%m)*n+z/m)%l<<" ";
            for(z=0;z<=k;z+=l)
            {
                 if (((z%m)*n+z/m)%l==0)
					--ans;
				//cout<<((z%n)*m+z/n)%l<<" ";
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}