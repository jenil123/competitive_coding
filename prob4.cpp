#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n][n];
    int i,j;
    int fill=0;
    for(i=0;i<n/2;i++)
    {
        for(j=0;j<n/2;j++)
        {
            a[i][j]=4*fill+1;
            a[i][j+n/2]=4*fill+2;
            a[i+n/2][j]=4*fill+3;
            a[i+n/2][j+n/2]=4*fill;
            fill++;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}