#include <bits/stdc++.h>

using namespace std;
int main()
 {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        vector<vector<int> >arr(r,vector<int>(c));
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cin>>arr[i][j];
            }
        }
        int maxele = INT_MIN;
        int minele = INT_MAX;
        int place = 0;
        int required_place = (r*c+1)/2;
        for(int i=0; i<r; i++){
            maxele = max(maxele,arr[i][c-1]);
            minele = min(minele,arr[i][0]);
        }
        while(maxele>minele){
            int mid = (maxele+minele)/2;
            place = 0;
            for(int i=0; i<r; i++){
                place += upper_bound(arr[i].begin(),arr[i].end(),mid)-arr[i].begin();
            }
            if(place<required_place) minele = mid+1;
            else
            maxele = mid;
        }
        cout<<minele<<endl;
    }
	return 0;
}
