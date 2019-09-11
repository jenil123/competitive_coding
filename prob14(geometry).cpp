#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <utility>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 << endl; prints xxx77
//setprecision - cout << setprecision (14) << f << endl; Prints x.xxxx
//cout.precision(x)  cout<<fixed<<val;  // prints x digits after decimal in val

using namespace std;
using namespace __gnu_pbds;

#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout) 
#define primeDEN 727999983

#define int ll
main(){
	std::ios::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int x1,y1,x2,y2,r1,r2;
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
		int dist2=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
		if(r1>r2 || (dist2>(r2-r1)*(r2-r1))){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
			continue;
		}
		long double dist=sqrt((double)dist2);
		if(dist2==0){
			cout<<x1+r1<<" "<<y1<<endl;
		}
		else{
			cout<<setprecision(30)<<(x1*(dist+r1)-r1*x2)/dist;
	        cout<<" ";
	        cout<<setprecision(30)<<(y1*(dist+r1)-r1*y2)/dist<<endl;
		}
	}
	return 0;   
}