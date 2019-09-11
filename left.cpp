I=mp.begin();
    // v[0].push_back(I->second);
    // I++;
    // //cout<<v[0][0]<<endl;
    // for(i=1;i<max;i++)
    // {
    //     ll temp=I->second;
    //     v[i].push_back((v[i-1][0])*(temp));
    //     //cout<<I->second<<" ";
    //     I++;
    // }
    // I=mp.begin();
    // I++;
    // for(I;I!=mp.end();I++)
    // {
    //     v[0].push_back(I->second);
    // }
    // i=max-1;
    // //cout<<v[i][0]<<" ";
    // for(j=0;j<v[0].size()-1;j++)
    // {
    //     ll temp;
    //     temp=v[i][0]/v[0][j];
    //     //cout<<temp<<" ";
    //     // if (std::find(v[i-1].begin(), v[i-1].end(),temp)!=v[i-1].end())
    //     // {
    //     //     continue;
    //     // }
    //     //else
    //     //{
    //         v[i-1].push_back(temp);
    //     //}
    // }
    // ll m;
    // for(i=max-2;i>1;i--)
    // {
    //     for(m=0;m<v[i].size();m++)
    //     {
    //         for(j=0;j<v[0].size();j++)
    //         {
    //             ll temp;
    //             //cout<<v[0][j]<<" ";
    //             if(m==0)
    //             {
    //                 if(j==v[0].size()-1)continue;
    //             }
    //             if(m==v[i].size()-1)
    //             {
    //                 if(j==0)
    //                 {
    //                     continue;
    //                 }
    //             }
    //             else if((j==m+1)&&((j!=0)&&j!=v[i].size()-1))
    //             {
    //                 continue;
    //             }
    //             else
    //             {
    //                 temp=v[i][m]/v[0][j];
    //             }
    //             //cout<<temp<<" ";
    //             if(temp==0)continue;
    //             // if (std::find(v[i-1].begin(), v[i-1].end(),temp)!=v[i-1].end())
    //             // {
    //             //     continue;
    //             // }
    //              else
    //             {
    //                 v[i-1].push_back(temp);
    //             }
    //         }
    //     }
    // }
    // for(i=0;i<max;i++)
    // {
    //     for(j=0;j<v[i].size();j++)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // //subset(a,out,n-1,k);
    // //count12=count12+n+1;
    // //cout<<count12;
	
	
	
	
	
#include <bits/stdc++.h>
#define ll uint64_t 
#define mod 1000000007
using namespace std;
map <ll,ll> mp;
int countSetBits(ll n) 
{ 
    unsigned int count = 0; 
    while (n) 
    { 
    n &= (n-1) ; 
    count++; 
    } 
    return count; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    int  a[n];
    int i,j;
    int z;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //ll x =  (1 << n);
    ll sum=0;
    if(k==1)
    {
        sum=sum+n+1;
        cout<<sum;
        return 0;
    }
    ll L=2;
    //vector <ll> out;
    sort(a,a+n);
    set <ll> s;
    for(i=0;i<n;i++)
    {
        mp[a[i]]++;
        s.insert(a[i]);
    }
    ll max;
    max=s.size();
    map<ll,ll>::iterator I;
    //vector <vector<ll>> v(max);
    vector <ll> vec;
    for(I=mp.begin();I!=mp.end();I++)
    {
        vec.push_back(I->second);
    }
    ll m=0;
    vector <ll> P;
    vector <vector<ll>> N(max);
    for(i=0;i<(1<<vec.size());++i) {
            sum=0;
            int res=countSetBits(i);
         	if(res>max) continue;
         	for(j=0;j<n;++j){
         		z = 1<<j;
         		if(z & i){
         			//cout<<vec[j]<<" ";
         			//sum+=A[j];
         			P.push_back(vec[j]);
         		}
         	}
         	//mp[sum]++;
         	N.push_back(P);
         	cout<<endl;
         }
    //printPowerSet(vec,vec.size());
    vector <ll> iterator::it;
    it=P.begin();
    while(it!=P.end())
    {
        cout<<*it<<endl;
        it++;
    }
    return 0;
    
}