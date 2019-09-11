#include <bits/stdc++.h>
#define ll long long int
# define max 922337203685477580
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        ll n,a,b;
        cin>>n>>a>>b;
        cin>>s;
        ll i,j;
        ll h=1;
        ll dp[n+1][2];
        //memset(dp,max,sizeof(dp));
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=1;j++)
            {
                dp[i][j]=max;
            }
        }
        dp[0][0]=b;
        //cout<<dp[1][0];
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                dp[i+1][0]=min(dp[i+1][0],dp[i][0]+a+b); 
                dp[i+1][1]=min(dp[i+1][1],dp[i][0]+2*a+2*b);
                dp[i+1][0]=min(dp[i+1][0],dp[i][1]+2*a+b);
                dp[i+1][1]=min(dp[i+1][1],dp[i][1]+a+2*b);
            }
            else
            {
                dp[i+1][1]=min(dp[i+1][1],dp[i][1]+a+2*b);
            }
            //print(dp[i][0]);
            //cout<<dp[i][0]<<" ";
            //cout<<dp[i][1]<<" "<<endl;
        }
        cout<<dp[n][0]<<endl;
    }
}