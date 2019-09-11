 #include <bits/stdc++.h>
 using namespace std;
 list<int>::iterator it;
 map <int,int> mp;
 list<int> lt;
 void subset(int arr[], int size, int left, int index, list<int> &l){
     if(left==0){
         int sum=0;
         for(it=l.begin(); it!=l.end() ; ++it)
         {
             sum+=*it;
             //cout << " " << *it;
        }
         mp[sum]++;
     return;
     }
     for(int i=index; i<size;i++){
         l.push_back(arr[i]);
         subset(arr,size,left-1,i+1,l);
         l.pop_back();
     }
 }     

 int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    cout.tie(NULL);
     int t;
     cin>>t;
     map<int,int>::iterator itr;
     while(t--)
     {
         int n,r;
         cin>>n>>r;
         int i,j;
         int a[n];
         for(i=0;i<n;i++)
         {
             cin>>a[i];
         }
         subset(a,n,r,0,lt);
         itr=mp.begin();
         cout<<itr->second<<endl;
         mp.clear();
         lt.clear();
     }
     return 0;
 }


#include <bits/stdc++.h>
#define ll uint64_t 
using namespace std;
 ll power(ll x, ll y) 
 { 
     ll temp; 
     if( y == 0) 
         return 1; 
     temp = power(x, y/2); 
     if (y%2 == 0) 
         return temp*temp; 
     else
         return x*temp*temp; 
 } 
 ll power(int x, unsigned int y) 
 { 
     ll res = 1; // Initialize result 
  
     while (y > 0) { 
         // If y is odd, multiply x with result 
         if (y & 1) 
             res = res * x; 
  
         // n must be even now 
         y = y >> 1; // y = y/2 
         x = x * x; // Change x to x^2 
     } 
     return  res; 
 } 
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
    int t;
    cin>>t;
    while(t--)
    {
        map <ll,ll> mp;
        map<ll,ll> :: iterator itr;
        ll n;
        ll k,z,i,j ;
         cin>>n>>k;
         ll A[n];
         for(i=0;i<n;++i){
             cin>>A[i];
         }
         
         //ll x =  (1 << n)-1;
         //cout<<x<<endl;
         ll sum;
         for(i=0;i<(1<<n);++i) {
             sum=0;
            //  string binary = bitset<64>(i).to_string();
            //  bitset<64> b2(string(binary));
            int res=countSetBits(i);
         	if(res!=k) continue;
         	for(j=0;j<n;++j){
         		z = 1<<j;
         		if(z & i){
         			//cout<<A[j]<<" ";
         			sum+=A[j];
         		}
         	}
         	mp[sum]++;
         	//cout<<endl;
         }
         itr=mp.begin();
         cout<<itr->second<<endl;
    }
     //cout<<mp[2]<<endl;
}