#include<bits/stdc++.h>
using namespace std;
int tp=0;

void kpc(vector<string>&arr, string st,string ans,int id){
    if(id==st.length()){
        tp++;
    cout<<ans<<"\n";
    return;}
    char ch= st[id];
    string ros= arr[ch-'0'];
    for (int i = 0; i < ros.length(); i++)
    {
            kpc(arr,st,ans+ros[i],id+1);
    }
    
}
int main(){
    vector<string>arr = {".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
    string st="34";
    kpc(arr,st,"",0);
    cout<<tp;
    return 0;

}