class Solution {
    
    
public:
    int find(int &k,int n)
    {
        if(n==1)
        {
            return 0;
        }
        int index;
        int sum=1;
        n--;
        while(k>=sum)
        {
            sum=sum*n;
            n--;
            if(n<=1)
            {
                break;
            }
        }
        index=k/sum;
        k=k%sum;
        return index;
    }
public:
    string getPermutation(int n, int k)
    {
        set <int> s;
        int i,j;
        for(i=1;i<=n;i++)
        {
            s.insert(i);
        }
        k=k-1;
        string ans="";
        set <int> ::iterator it;
        it=s.begin();
        for(i=0;i<n;i++)
        {
            int ind=find(k,n-i);
            advance(it,ind);
            ans += (to_string(*it)); 
            s.erase(it);
            it=s.begin();
        }
        return ans;
    }
};