class Solution {
public:
    // bool isValid(vector <int> &a,int sum,int n)
    // {
    //     if(sum==0)
    //     {
    //         return true;
    //     }
    //     if(n==0&&sum!=0)
    //     {
    //         return false;
    //     }
    //     if(a[n-1]>sum)
    //     {
    //         return isValid(a,sum,n-1);
    //     }
    //     else
    //     {
    //         return isValid(a,sum,n-1)||isValid(a,sum-a[n-1],n-1);
    //     }
    // }
public:
    bool canPartition(vector<int>& a) 
    {
        int i,j;
        int sum=0;
        for(i=0;i<a.size();i++)
        {
            sum+=a[i];
        }
        if(sum%2!=0)
        {
            return false;
        }
        int exp=sum/2;
        int dp[exp+1][a.size()+1];
        int n=a.size();
        for(i=0;i<=n;i++)
        {
            dp[0][i]=true;
        }
        for (i = 1; i <= sum / 2; i++)  
             dp[i][0] = false; 
        
        for(i=1;i<=exp;i++)
        {
            for(j=1;j<=n;j++)
            {
                dp[i][j]=dp[i][j-1];
                if(a[j-1]<=i)
                {
                    dp[i][j]=dp[i][j]||dp[i-a[j-1]][j-1];
                }
            }
        }
        return dp[exp][n];
    }
};