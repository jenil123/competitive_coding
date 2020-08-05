#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

// Matrix Ai has dimension p[i-1] x p[i] 
// for i = 1..n 
int util(ll p[], ll n) 
{ 

	/* For simplicity of the program, one 
	extra row and one extra column are 
	allocated in m[][]. 0th row and 0th 
	column of m[][] are not used */
	int m[n][n]; 

	int i, j, k, L, q; 

	/* m[i,j] = Minimum number of scalar 
	multiplications needed to compute the 
	matrix A[i]A[i+1]...A[j] = A[i..j] where 
	dimension of A[i] is p[i-1] x p[i] */

	// cost is zero when multiplying 
	// one matrix. 
	for (i = 1; i < n; i++) 
		m[i][i] = 0; 

	// L is chain length. 
	for (L = 2; L < n; L++) 
	{ 
		for (i = 1; i < n - L + 1; i++) 
		{ 
			j = i + L - 1; 
			m[i][j] = INT_MAX; 
			for (k = i; k <= j - 1; k++) 
			{ 
				// q = cost/scalar multiplications 
				q = m[i][k] + m[k + 1][j] + 
					p[i - 1] * p[k] * p[j]; 
				if (q < m[i][j]) 
					m[i][j] = q; 
			} 
		} 
	} 
// 	for(i=0;i<n;i++)
// 	{
// 	    for(j=0;j<n;j++)
// 	    {
// 	        cout<<m[i][j]<<" ";
// 	    }
// 	    cout<<endl;
// 	}

	return m[1][n - 1]; 
} 

// Driver Code Q
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    ll i,j;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cout<<util(a,n)<<endl;;
	}

	//getchar(); 
	return 0; 
} 

