#include<bits/stdc++.h>
using namespace std;

void stringTraversal(int i,int j,string str,int count){
    if( j==str.length()){
        cout<<count;
        return ;
    }
    if(str[i]==str[j])
    stringTraversal(i+1,j+1,str,count+1);
    else
    stringTraversal(i+1,j+1,str,count);
}
int main(){
    string str;
    cin>>str;
    stringTraversal(0,2,str,0);
    return 0;
}