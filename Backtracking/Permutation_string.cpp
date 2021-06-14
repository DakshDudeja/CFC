#include<bits/stdc++.h>
using namespace std;
int tp=0;

void permutation(string str,int idx){
    if(idx==str.length()){
        tp++;
        cout<<str<<endl;
    }
    else{
    
    for (int i = idx; i<str.length(); i++)
    {
        swap(str[idx],str[i]);
        //cout<<str<<"\n";
        permutation(str,idx+1);
        swap(str[i],str[idx]);
    }
    }
}
int main(){
    string str = "abc";
    permutation(str,0);
    cout<<tp;
    return 0;
}