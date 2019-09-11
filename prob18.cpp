#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string areParanthesisBalanced(string expr) 
{ 
    stack<char> s; 
    char x; 
	string str="";
    // Traversing the Expression 
    for (int i=0; i<expr.length(); i++) 
    { 
        if (expr[i]=='(') 
        { 
            // Push the element in the stack 
            s.push(expr[i]); 
            continue; 
        } 
  
        // IF current current character is not opening 
        // bracket, then it must be closing. So stack 
        // cannot be empty at this point. 
        switch (expr[i]) 
        { 
        case ')': 
			if(s.empty())
			{
				str+=')';
				break;
			}
			else
			{
				s.pop(); 
			}
            break; 
  
        } 
    }
    while(!s.empty())
    {
        char v=s.top();
        str+=v;
        s.pop();
    }
  
    // Check Empty Stack 
    return str; 
} 
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string temp;
//     while((s.find(temp, 0)!=std::string::npos)){
//         size_t index = 0;
//     while (true) {
//      /* Locate the substring to replace. */
//      index = s.find(temp, index);
//      if (index == std::string::npos) break;

//      /* Make the replacement. */
//      s.replace(index, 2, "");

//      /* Advance index forward so the next iteration doesn't pick it up as well. */
//      index += 2;
// }
// }
    s=areParanthesisBalanced(s);
    cout<<temp;
    temp=")(";
    size_t index=0;
    while (true) {
     /* Locate the substring to replace. */
     index = s.find(temp, index);
     if (index == std::string::npos) break;

     /* Make the replacement. */
     s.replace(index, 2, "");

     /* Advance index forward so the next iteration doesn't pick it up as well. */
     index += 1;
}
//cout<<s;
if(s=="")
cout<<"Yes";
else
cout<<"No";
}