#include <bits/stdc++.h>
using namespace std;
#define F ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
int main()
{
    //ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
    F;
	ll t,n,q,l,r,i;
	cin>>t;
	while(t--)
	{
	    cin>>n>>q;
	    string s;
	    cin>>s;
	    ll freq[n+1]= {0};
        ll c=1;
        for(i=0;i<=n-3;i++)
        {
            if(s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2])
            {
                freq[c]++;
                c++;
            }
            else
            {
                c++;
            }
        }
	   // for(i=0;i<=n;i++)
	   // {
	   //     cout<<freq[i]<<" ";
	   // }
	    for(i=1;i<=n;i++)
	    {
	        freq[i] = freq[i-1] + freq[i];
	    }
	   // for(i=0;i<=n;i++)
	   // {
	   //     cout<<freq[i]<<" ";
	   // }
	    while(q--)
	    {
	        cin>>l>>r;
	        if((r-l)+1 < 3)
	        {
	            cout<<"NO"<<endl;
	            continue;
	        }
	        string res="NO";
            if((freq[r-2] - freq[l-1]) > 0)
            {
                res="YES";
            }
	        cout<<res<<endl;
	    }
	}
	return 0;
}