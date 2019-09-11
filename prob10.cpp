#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    while(q--)
    {
        ll n,m;
        cin>>n>>m;
        ll i,j;;
        ll score=0;
        if(m%10==0)
        {
            cout<<score<<"\n";
        }
        else if(m%5==0)
        {
            ll diff;
            ll left;
            diff=(n/m);
            left=diff/2;
            score=left*5;
            diff=diff%2;
            j=m;
            for(i=0;i<diff;i++)
            {
                score+=j%10;
                j=j+m;
            }
            cout<<score<<"\n";
        }
        else if(m%2==0)
        {
            ll diff;
            ll left;
            diff=(n/m);
            left=diff/5;
            score=left*20;
            diff=diff%5;
            j=m;
            for(i=0;i<diff;i++)
            {
                score+=j%10;
                j=j+m;
            }
            cout<<score<<"\n";
        }
        else
        {
            ll diff;
            ll left;
            diff=(n/m);
            left=diff/10;
            score=left*45;
            diff=diff%10;
            j=m;
            for(i=0;i<diff;i++)
            {
                score+=j%10;
                j=j+m;
            }
            cout<<score<<"\n";   
        }
    }
}