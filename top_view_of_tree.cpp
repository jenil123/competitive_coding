// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

void topView(struct Node *root);


int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,i,k;
        cin>>n;
        i=n;

        Node* root=NULL;
        queue <Node*> q;
        while(i>0)
        {
            int a,b;
            char c;
            cin>> a >> b >> c;
            if(!root){
                root = new Node(a);
                q.push(root);
            }
            Node* pick = q.front();
            q.pop();

            if(c == 'L'){
                pick->left = new Node(b);
                q.push( pick->left );
            }
            cin>> a >> b >> c;
            if(c == 'R'){
                pick->right = new Node(b);
                q.push( pick->right );
            }
            i-=2;
        }
//        inorder(root);
//        cout<<endl;
        topView(root);
        cout << endl;
    }
    return 0;
}




// } Driver Code Ends


//Structure of binary tree
/*struct Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
// function should print the topView of the binary tree
void util(Node  *root,int level,int i,map <int,pair<int,int>> &mp)
{
    if(root==NULL)
    {
        return;
    }
        if(mp.find(i)==mp.end())
        {
            mp[i]={root->data,level};
        }
        else
        {
            if(mp[i].second > level){
                auto p = make_pair(root->data,level);
                mp[i] = p;
            }
        }
        util(root->left,level+1,i-1,mp);
        util(root->right,level+1,i+1,mp);
}
void topView( Node *root)
{
    map <int,pair<int,int>> mp;
    util(root,0,0,mp);
    for(auto it:mp)
    {
        cout<<it.second.first<<" ";
    }
    cout<<endl;
    //Your code here
}


'