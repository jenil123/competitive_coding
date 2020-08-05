bool dfs(int src,vector <int>&col,vector <int> adj[])
{
    col[src]=1;
    for(auto it: adj[src])
    {
        if(col[it]==1)
        {
            return true;
        }
        if(!col[it]&&dfs(it,col,adj))
        return  true;
    }
    col[src]=2;
    return false;
}
bool isCyclic(int v, vector<int> adj[])
{
    
    // Your code here
    vector<int>color(v,0);
   
      for(int i=0;i<v;i++)
     {
        if(color[i]!=2 && dfs(i,color,adj))
        {
            // This will print your cycle elements
            
            //  for(int i=0;i<v;i++)
            // {
            //     if(color[i]==1)  // Agar cycle bani, jinka jinka color 1 hain wo hi cycle bnainge kyuki vhi hmare path m hain
            //      cout<<i<<" ";
            // }
            
            return true;
        }
     }
     
   return false;
    
}