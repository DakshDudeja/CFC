#include<bits/stdc++.h>
using namespace std;

int tp=0;
void AsciSubset(string s,int i,string ans){
    if(i==s.length()){
        tp++;
        cout<<ans<<"\n";
        return;
    }
    AsciSubset(s,i+1,ans+s[i]);
    AsciSubset(s,i+1,ans+to_string(int(s[i])));
    AsciSubset(s,i+1,ans);
}
int main(){
    string s;
    cin>>s;
    AsciSubset(s,0,"");
    cout<<"total count is  "<<tp;
    return 0;
}
