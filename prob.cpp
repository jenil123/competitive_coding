#include <bits/stdc++.h>
#define ll long long int
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
        ll score=0;
        if(s[1]=='1')
        {
            score+=2*a+3*b;
            h=2;
        }
        else
        {
            score+=a+2*b;
            h=1;
        }
        //cout<<h<<" ";
        for(i=1;i<n-1;i++)
        {
            if(h==1)
            {
                if(s[i+1]=='1'&&s[i]=='0')
                {
                    score+=2*a+2*b;
                    h=2;
                }
                else if(s[i+1]=='0'&&s[i]=='0')
                {
                    score+=a+b;
                    h=1;
                }
            }
            else
            {
                if(s[i+1]=='1'&&s[i]=='1')
                {
                    score+=a+2*b;
                    h=2;
                }
                else if(s[i]=='1'&&s[i+1]=='0')
                {
                    score+=a+2*b;
                    h=2;
                }
                else if(s[i]=='0'&&s[i+1]=='1')
                {
                    score+=a+2*b;
                }
                else 
                {
                    if(a+2*b>2*a+b)
                    {
                        score+=2*a+b;
                        h=1;
                    }
                    else
                    {
                        score+=(a+2*b);
                        h=2;
                    }
                }
            }
            //cout<<h<<" ";
        }
        if(h==2)
        {
            score+=2*a+b;
        }
        else
        {
            score+=a+b;
        }
        cout<<score<<endl;
    }
}