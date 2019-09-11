#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <string> a(n);
        int i,j;
        for(i=0;i<n;i++)
        {
            string temp;
            cin>>temp;
            a[i]=temp;
        }
        int p1=0,p2=0;
        map <int,int> mp1;
        map <int,int> mp2;
        //cout<<a[1]<<endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n/2;j++)
            {
                if(a[i][j]=='1')
                {
                    mp1[i]++;
                }
            }
            for(j=n/2;j<n;j++)
            {
                if(a[i][j]=='1')
                {
                    mp2[i]++;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            p1+=mp1[i];
            p2+=mp2[i];
            //cout<<mp1[i]<<" "<<mp2[i]<<endl;
        }
        //cout<<p1<<" "<<p2<<endl;
        if(p1==p2)
        {
            cout<<0<<endl;
        }
        else
        {
            int temp1,temp2;
            int min;
            temp1=p1;
            temp2=p2;
            min=abs(p1-p2);
            for(i=0;i<n;i++)
            {
                temp1=p1-mp1[i]+mp2[i];
                temp2=p2-mp2[i]+mp1[i];
                //cout<<temp1<<" "<<temp2<<endl;
                if(abs(temp1-temp2)<min)
                {
                    min=abs(temp1-temp2);
                }
            }
            cout<<min<<endl;
        }
    }
}