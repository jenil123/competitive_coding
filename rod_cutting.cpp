#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin>>n;
    ll a[n];
    ll i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll dp[n+1][n+1];
    memset(dp,0,sizeof(dp));
    // for(i=0;i<=n;i++)
    // {
    //     dp[i][0]=0;
    // }
    // for(i=0;i<=n;i++)
    // {
    //     dp[0][i]=0;
    // }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i)
            {
                dp[i][j]=max(dp[i-1][j],a[i-1]+dp[i][j-i]);
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][n]<<endl;
}