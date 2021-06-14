#include<bits/stdc++.h>
using namespace std;

bool ValidParenthesis(string s,int i,vector<char>&ans){
    if(i == s.length()){
        return false;
    }
    if(s[i]=='('){
        ans.push_back(')');
        ValidParenthesis(s,i+1,ans);
    }
    else if (s[i]=='[')
    {
        ans.push_back(']');
        ValidParenthesis(s,i+1,ans);
    }
     else if (s[i]=='{')
    {
        ans.push_back('}');
        ValidParenthesis(s,i+1,ans);
    }
    else{
        if ((ans.empty()) || (s[i] != ans[ans.size()-1]))
        return false;
        ans.pop_back();
        ValidParenthesis(s,i+1,ans);
     }
}
int main(){
    string s;
    cin>>s;
    vector<char>ans(s.length());
    bool ans1=ValidParenthesis(s,0,ans);
    cout<<ans1;
    return 0;
}