#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll str,in,ex;
        cin>>str>>in>>ex;
        ll t=ex,t1=0;
        //p=min(c1,c2);
        if(str+ex<=in)
        {
           cout<<0<<endl;
        }
        else if(str>in+ex)
        {
            cout<<ex+1<<endl;
        }
        else
        {
            ll ans=str - in + ex+1 ;
            cout<<(ans/2)<<endl;
        }
    }
}



#include<bits/stdc++.h>
using namespace std;
#define cool ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{ 
    cool;
    long long int t;
    cin>>t;
    while(t--)
    {
    long long int str,intt,exp,a=0,res=0;
    cin>>str>>intt>>exp;
    str+=exp;
    if(str<=intt)
    cout<<"0\n";
    else if(str>intt&&exp==0)
    cout<<"1\n";
    else
    {
    a=str-intt;
    if(a%2==0)
    res=(a/2);
    else if(a%2!=0)
    res=((a/2)+1);
    if(res>(exp+1))
    res=exp+1;
    cout<<res<<"\n";
}
}
    return 0;
}