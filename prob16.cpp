#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void  printIntersection(int arr1[], int arr2[], 
                               int n1, int n2) 
{ 
    set<int> hs; 
    int t;
  
    // Insert the elements of arr1[] to set S 
    for (int i = 0; i < n1; i++) 
        hs.insert(arr1[i]); 
  
    for (int i = 0; i < n2; i++) 
  
        // If element is present in set then 
        // push it to vector V 
        if (hs.find(arr2[i]) != hs.end())
        {
            cout<<arr2[i]<<" ";
        }
} 

int main()
{
    int odd[100];
    int even[100];
    int i,j;
    odd[0]=1;
    for(i=1;i<100;i++)
    {
        odd[i]=odd[i-1]+2;
    }
    even[0]=0;
    for(i=1;i<100;i++)
    {
        even[i]=even[i-1]+2;
    }
    cout << "?";
    for(int i = 0; i < 100; i++)
        cout << " " << odd[i];
    cout << endl;
    cout.flush();
    int res1;
    cin>>res1;
    cout << "?";
    for(int i = 0; i < 100; i++)
        cout << " " << even[i];
    cout << endl;
    cout.flush();
    int res2;
    cin>>res2;
    int t1,t2;
    for(i=0;i<100;i++)
    {
        t1=odd[i]^res1;
        t2=even[i]^res2;
        odd[i]=t1;
        even[i]=t2;
    }
    printIntersection(odd,even,100,100);
   // cout<<"! "<<c<<endl;
    cout.flush();
    return 0;
}