void p(int m[MAX][MAX], int n, int r, int c, vector<string> &v, string s){
    if(r>=n||r<0||c>=n||c<0||m[r][c]==0||m[r][c]==100) return;
    if(r==n-1 && c==n-1){
        v.push_back(s);
        return;
    }
    m[r][c]=100;
    p(m,n,r+1,c,v,s+'D');
    p(m,n,r,c+1,v,s+'R');
    p(m,n,r-1,c,v,s+'U');
    p(m,n,r,c-1,v,s+'L');
    m[r][c]=1;
}
vector<string> printPath(int m[MAX][MAX], int n)
{
    int r=0,c=0;
    vector<string> v;
    string s="";
    p(m,n,r,c,v,s);
    sort(v.begin(), v.end());
    return v;
}