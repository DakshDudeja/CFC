#include<bits/stdc++.h>
using namespace std;

void StringDash(string s,int i,string ans){
    if (i==s.length()){
        cout<<ans;
        return ;
    }
    if(s[i]==s[i+1])
    StringDash(s,i+1,ans+s[i]+'-');
    else
    StringDash(s,i+1,ans+s[i]);
}
int main(){
    string s;
    cin>>s;
    StringDash(s,0,"");
    return 0;
}
