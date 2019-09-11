#include <bits/stdc++.h>
#include <cmath>
#define ll unsigned long long 
using namespace std;
// ll highestPowerof2(ll n) 
// { 
//     if (n < 1) 
//         return 0; 
  
//     ll res = 1; 
  
//     // Try all powers starting from 2^1 
//     for (ll i=0; i<64; i++) 
//     { 
//         ll curr = 1 << i; 
//         //cout<<curr<<endl;
//         // If current power is more than n, break 
//         if (curr > n) 
//           break; 
//         else
//         res = curr; 
//     } 
  
//     return res; 
// } 

ll  previousPowerOfTwo(ll  n )
{
	// If n is already a power of two, we can simply shift it right 
	// by 1 place and get the previous power of 2
	// (n&n-1) will be 0 if n is power of two ( for n > = 2 )
	// (n&&!(n&(n-1))) condition will take care of n < 2;
	if((n&&!(n&(n-1)))==1)
	{
		return n;
	}
	// This while loop will run until we get a number which is a power of 2
	while(n&n-1)
	{
		// Each time we are performing Bit wise And ( & )operation to clear bits
		n=n&n-1;
	}
	return  n ;
}

ll fib(ll f[], ll n) 
{ 
    f[0] = 0; 
    f[1] = 1; 
  
    for (ll i = 2; i <=n; i++) 
        f[i] = (f[i - 1] + f[i - 2]) % 10; 
  
    return f[n]; 
} 
ll findLastDigit(ll n) 
{ 
    ll f[60] = {0}; 
  
    // Precomputing units digit of   
    // first 60 Fibonacci numbers 
    fib(f, 60); 
  
    return f[n % 60]; 
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
        ll n;
        cin>>n;
        ll i=0;
        ll ans=0;
        ll r;
        r=previousPowerOfTwo(n);
        //cout<<r<<endl;
        //cout<<log2(r)<<endl;
        cout<<findLastDigit(r-1)<<endl;
    }
}