#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool sortbylogic(const pair<int,pair<int,int>> &a, const pair<int,pair<int,int>> &b){
    
    return (a.second.second < b.second.second);
}
int main()
 {
	//code
	int t ;
	cin >> t;
	while(t--){
	    int n; cin >>n;
	    
	    vector <pair<int,pair<int,int>>> vec(n);
	    
	    for(int i=1;i<=n;i++){
	        vec[i-1].first = i;
	        cin >>vec[i-1].second.first;
	    }
	    
	    for(int i=1;i<=n;i++){
	        
	        cin >>vec[i-1].second.second;
	    }
	    
	    sort(vec.begin(),vec.end(),sortbylogic);
	    
	    int i=0;
	    
	    cout << vec[i].first << " ";
	    
	    for(int j=1;j<n;j++){
	        
	        if(vec[j].second.first >= vec[i].second.second){
	            cout << vec[j].first << " ";
	            i=j;
	        }
	        
	    }
	    
	    cout << endl;
	
	
	
	}
	return 0;
}