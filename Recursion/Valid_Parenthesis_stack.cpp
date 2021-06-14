#include<bits/stdc++.h>
using namespace std;

bool ValidParenthesis(string s,int i,stack<int>&stack){
    if(i==s.length()){
        return false;
    }
    if(s[i]=='('|| s[i]=='['|| s[i]=='{'){
        stack.push(s[i]);
        ValidParenthesis(s,i+1,stack);
    }
    if (stack.empty()) return false;
    char x = stack.top();
    if((s[i]==')'&& x=='(') || (s[i]==']'&& x=='[') || (s[i]=='}'&& x=='{')){
        stack.pop();
        if (stack.empty()) return true;
        ValidParenthesis(s,i+1,stack);
    }
    else
    ValidParenthesis(s,i+1,stack)   ;
}
int main(){
    string s;
    cin>>s;
    stack<int>stack;
    bool ans=ValidParenthesis(s,0,stack);
    cout<<ans;
    return 0;
}