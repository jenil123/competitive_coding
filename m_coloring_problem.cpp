#include<bits/stdc++.h>
using namespace std;

bool fun(vector<int> adj[],int n,int m,vector<int> &color,int i)
{
    if(i==n)
        return true;
    bool sol = false;
    unordered_set<int> neigh;
    for(int k=0;k<adj[i].size();k++)
        neigh.insert(color[adj[i][k]]);
    for(int c=0;c<m;c++)
    {
        if(neigh.find(c)==neigh.end())
        {
            color[i] = c;
            sol = sol || fun(adj,n,m,color,i+1);
            color[i] = -1;
        }
    }
    return sol;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n;
	    cin>>n;
	    vector<int> adj[n];
	    int m;
	    cin>>m;
	    int e;
	    cin>>e;
	    for(int i=0;i<e;i++)
	    {
	        int a,b;
	        cin>>a>>b;
	        adj[a-1].push_back(b-1);
	        adj[b-1].push_back(a-1);
	    }
	    vector<int> color(n,-1);
	    cout<<fun(adj,n,m,color,0)<<endl;
	}
	return 0;
}