

#include <bits/stdc++.h>
#define ll uint64_t 
#define MAX 500
using namespace std;
ll binomialCoeff(ll n,ll k) 
{ 
    ll C[k+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;  // nC0 is 1 
  
    for (ll i = 1; i <= n; i++) 
    { 
        // Compute next row of pascal triangle using 
        // the previous row 
        for (ll j = min(i, k); j > 0; j--) 
            C[j] = C[j] + C[j-1]; 
    } 
    return C[k]; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll k;
        int i,j;
        cin>>n>>k;
        ll A[n];
        map<ll,ll> mp;
        for(i=0;i<n;++i)
        {
             cin>>A[i];
        }
        sort(A,A+n);
        // for(i=0;i<n;++i)
        // {
        //      cout<<A[i]<<" ";
        // }
        //cout<<endl;
        for(i=0;i<n;++i)
        {
            mp[A[i]]++;
        }
        map <ll,ll>::iterator itr;
        ll sum;
        itr=mp.begin();
        if((itr->second)>=k)
        {
            cout<<binomialCoeff(itr->second,k)<<endl;
        }
        else
        {
            itr=mp.begin();
            ll freq=0;
            ll diff=0;
            while(itr!=mp.end())
            {
                //cout<<itr->second<<endl;
                freq+=itr->second;
                //cout<<mp[A[i]]<<endl;
                //cout<<freq<<endl;
                if(freq<k)
                {
                    itr++;
                }
                else
                {
                    freq-=itr->second;
                    //cout<<mp[A[i]];
                    diff=k-freq;
                    freq=itr->second;
                    break;
                }
            }
            //cout<<freq<<" "<<diff<<endl;
            sum=binomialCoeff(freq,diff);
            cout<<sum<<endl;
        }
    }
}