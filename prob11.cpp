#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,l,r;
        cin>>n>>m>>k>>l>>r;
        int i,j;
        int c[n],p[n];
        for(i=0;i<n;i++)
        {
            cin>>c[i];
            cin>>p[i];
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(c[j]>k+1)
                {
                    c[j]--;
                }
                else if(c[j]<k-1)
                {
                    c[j]++;
                }
                else
                {
                    c[j]=k;
                }
            }
        }
        vector <int> index;
        for(i=0;i<n;i++)
        {
            if(c[i]>=l&&c[i]<=r)
            {
                index.push_back(i);
            }
        }
        if(index.size()==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            int min;
            min=p[index[0]];
            for(i=1;i<index.size();i++)
            {
                if(p[index[i]]<min)
                {
                    min=p[index[i]];
                }
            }
            cout<<min<<endl;
            
        }
    }
}