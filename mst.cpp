/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include <bits/stdc++.h>
using namespace std;
int time1;

void articulation(int x,vector <int> &tin,vector <int>&low,vector <int> ad[],vector <int>&vis,set <int> &s,set<pair<int,int>> &v,int par=-1)
{
	low[x]=time1;
	tin[x]=time1;
	time1++;	
	vis[x]=1;
	int child=0;
	for(auto it: ad[x])
	{
		if(it==par)continue;
		if(vis[it])
		{
			low[x]=min(low[x],tin[it]);
			
		}
		else
		{
			articulation(it,tin,low,ad,vis,s,v,x);
			low[x]=min(low[x],low[it]);
			if(low[it]>tin[x])
			{
				v.insert({x,it});
			}
			if(low[it]>=tin[x]&&par!=-1)
			{
				s.insert(x);
			}
			child++;
		}
	}
	if(par==-1&&child>1)
	{
		s.insert(x);
	}
}
// void dfs(int x,vector <int> &tin,vector <int>&low,vector <int> ad[],vector <int>&vis,int par=-1)
// {
// 	low[x]=tin[x]=time1;
// 	time1++;
// 	for(auto it: ad[x])
// 	{
// 		if(it==par)continue;
// 		if(vis[it]==1)
// 		{
// 			low[x]=min(low[x],tin[it]);
// 		}
// 		else{
// 			dfs(it,tin,low,ad,vis,x);
// 			low[x]=min(low[x],low[it]);
// 			if(low[it]>low[x])
// 			{
// 				if(!v.count({it,x}))
// 				{
// 					v.insert({x,it});
// 				}
				
// 				//v.insert({it,x});
// 			}
// 		}
// 	}
// }
int main()
{
	int n,m;
	cin>>n>>m;
	int i,j;
	vector <int> ad[n];
	vector <int> tin(n,-1);
	vector <int> low(n,-1);
	vector <int> vis(n,0);
	set <int> s;
	set <pair<int,int>> v;
	for(i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		ad[x].push_back(y);
		ad[y].push_back(x);
	}
	for(i=0;i<n;i++)
	{
		if(!vis[i])
		articulation(i,tin,low,ad,vis,s,v);
	}
	cout<<s.size()<<endl;
	for(auto it:s)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	cout<<v.size()<<endl;
	for(auto it:v)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}
}
