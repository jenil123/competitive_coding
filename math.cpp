#include <bits/stdc++.h>
#define ll unsigned long long 
using namespace std;

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m;
	    cin>>n>>m;
	    ll temp;
	    temp=(n*(n-1))/2 + n;
	    
	    if(n==1&&m==0)
	    {
	        cout<<0<<endl;
	    }
	    else if(n==1&&m==1)
	    {
	        cout<<1<<endl;
	    }
	    else if(n==2&&m==1)
	    {
	        cout<<1<<endl;
	    }
	    else if(m>temp||m<=n-2)
	    {
	        cout<<-1<<endl;
	    }
	    else if(m<=n+1)
	    {
	        cout<<2<<endl;
	    }
	    else if(m>n+1&&m<=2*n)
	    {
	        cout<<3<<endl;
	    }
	    else
	    {
	        ll diff;
	        ll j=3;
	        ll i=ceil((2*(double)(m)/(double)n));
	        diff=i-4;
	        j=j+diff;
	        cout<<j<<endl;
	    }
	}
	return 0;
}
