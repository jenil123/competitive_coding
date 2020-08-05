#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;
ll n,m;
vector<vector<ll>>adj(10005);
ll parent[100005];
ll dis[100005];
map<pair<ll,ll>,ll>mp;
ll vis[100005];

int main()
{
	//cout<<"Enter number of vertices"<<endl;
	//cout<<"number 1"<<endl;
	cin>>n;
	//cout<<"Enter number of edges"<<endl;

	cin>>m;
	int i,j;
	for(i=0;i<m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		adj[x].push_back(y);
		adj[y].push_back(x);
		mp[{x,y}]=z;
		mp[{y,x}]=z;
	}
	cout<<"here"<<endl;
	for(i=0;i<n;i++)
	{
	    dis[i]=1000000000;
	}
	dis[5]=0;
	priority_queue<pair<ll,ll>,vector <pair<ll,ll>>, greater<pair<ll,ll>>> pq;
	pq.push({5,0});
	vis[5]=1;
	while(!pq.empty())
	{
	    ll x,y,z;
	    x=pq.top().first;
	    pq.pop();
	    vis[x]=1;
	    for(i=0;i<adj[x].size();i++)
	    {
	        //cout<<adj[x][i]<<endl;
	        if(!vis[adj[x][i]])
	        {
	            if(dis[adj[x][i]]>dis[x]+mp[{x,adj[x][i]}])
	            {
	                dis[adj[x][i]]=dis[x]+mp[{x,adj[x][i]}];
	                pq.push({adj[x][i],dis[adj[x][i]]});
	            }
	        }
	    }
	}
	cout<<"here2"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<dis[i]<<" ";
	}
	cout<<endl;
}