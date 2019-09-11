#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int front[n];
	int i,j;
	int a[n][n];
	for(i=0;i<n;i++)
	{
	    for(j=1;j<n;j++)
	    {
	        cin>>a[i][j];
	    }
	}
	for(i=0;i<n;i++)
	{
	    a[i][0]=i+1;
	}
// 	for(i=0;i<n;i++)
// 	{
// 	    for(j=0;j<n;j++)
// 	    {
// 	        cout<<a[i][j]<<" ";
// 	    }
// 	    cout<<endl;
// 	}
	for(i=0;i<n;i++)
	{
	    front[i]=1;
	}
	int update[n+1];
	for(i=0;i<=n;i++)
	{
	    update[i]=0;
	}
	set<pair<int,int>> s;
	int ans=0;
	while(*min_element(front,front+n)<n)
	{
	    for(i=0;i<=n;i++)
	    {
	        update[i]=0;
	    }
	    int cell=0;
	    for(i=0;i<n;i++)
	    {
	        if(front[i]==n)
	        {
	            continue;
	        }
	        else
	        {
	            pair <int,int> g;
	            //update[a[i][0]]++;
	            //update[a[i][front[i]]]++;
	            //cout<< a[i][0]<<" "<<a[i][front[i]]<<endl;
	            //cout<< update[a[i][0]]<<" "<<update[a[i][front[i]]]<<endl;
	           // if(update[a[i][0]]>2||update[a[i][front[i]]]>2)
	           // {
	           //    continue;
	           // }
	                g=make_pair(a[i][0],a[i][front[i]]);
	                swap(g.first,g.second);
	                //cout<<g.first<<" "<<g.second<<endl;
	                if(s.find(g)==s.end())
	                {
	                    swap(g.first,g.second);
	                    s.insert(g);
	                }
	                else
	                {
	                    //cout<<g.first<<" "<<g.second<<endl;
	                    front[g.first-1]++;
	                    front[g.second-1]++;
	                    cell+=2;
	                    //cout<<g.first-1<<":"<<front[g.first-1]<<" "<<g.second-1<<":"<<front[g.second-1]<<endl;
	                }
	            //cout<<cell<<endl;
	        }
	    }
	    s.clear();
	    //cout<<ans<<endl;
	    if(cell==0)
	    {
	        cout<<-1<<endl;
	        return 0;
	    }
	    ans++;
	}
	cout<<ans<<endl;
	return 0;
}











#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int front[n];
	int i,j;
	int a[n][n];
	for(i=0;i<n;i++)
	{
	    for(j=1;j<n;j++)
	    {
	        cin>>a[i][j];
	    }
	}
	for(i=0;i<n;i++)
	{
	    a[i][0]=i+1;
	}
// 	for(i=0;i<n;i++)
// 	{
// 	    for(j=0;j<n;j++)
// 	    {
// 	        cout<<a[i][j]<<" ";
// 	    }
// 	    cout<<endl;
// 	}
	for(i=0;i<n;i++)
	{
	    front[i]=1;
	}
	int update[n+1];
	for(i=0;i<=n;i++)
	{
	    update[i]=0;
	}
	set<pair<int,int>> s;
	int ans=0;
	while(*min_element(front,front+n)<n)
	{
	    for(i=0;i<=n;i++)
	    {
	        update[i]=0;
	    }
	    int cell=0;
	    for(i=0;i<n;i++)
	    {
	        if(front[i]==n)
	        {
	            continue;
	        }
	        else
	        {
	            pair <int,int> g;
	            //update[a[i][0]]++;
	            //update[a[i][front[i]]]++;
	            //cout<< a[i][0]<<" "<<a[i][front[i]]<<endl;
	            //cout<< update[a[i][0]]<<" "<<update[a[i][front[i]]]<<endl;
	           // if(update[a[i][0]]>2||update[a[i][front[i]]]>2)
	           // {
	           //    continue;
	           // }
	                g=make_pair(a[i][0],a[i][front[i]]);
	                swap(g.first,g.second);
	                //cout<<g.first<<" "<<g.second<<endl;
	                if(s.find(g)==s.end())
	                {
	                    swap(g.first,g.second);
	                    s.insert(g);
	                }
	                else
	                {
	                    //cout<<g.first<<" "<<g.second<<endl;
	                    front[g.first-1]++;
	                    front[g.second-1]++;
	                    cell+=2;
	                    //cout<<g.first-1<<":"<<front[g.first-1]<<" "<<g.second-1<<":"<<front[g.second-1]<<endl;
	                }
	            //cout<<cell<<endl;
	        }
	    }
	    s.clear();
	    //cout<<ans<<endl;
	    if(cell==0)
	    {
	        cout<<-1<<endl;
	        return 0;
	    }
	    ans++;
	}
	cout<<ans<<endl;
	return 0;
}
