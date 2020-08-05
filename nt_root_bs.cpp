#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int l=0;
	    if(m>=0&&m<=1)
	    {
	        l=m;
	        r=0;
	    }
	    else
	    {
	        l=0;
	        r=m;
	    }
	    double epsilon = 0.00000001;
	    double ans=(l+r)/2;
	    while (abs((pow(ans, n)) - x) >= epsilon) 
        { 
            if (pow(ans, n) > x) 
            { 
                high = ans ; 
            }  
            else
            { 
                low = ans ; 
            } 
            ans = (low + high) / 2; 
        } 
        cout << fixed << setprecision(16)  
        << ans; 
	}
}