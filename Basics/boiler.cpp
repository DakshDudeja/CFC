#include<bits/stdc++.h>
using namespace std;
 
 void lexographical(int n,int i){
     if(n<i) return;
     cout<<i<<endl;
     for(int j=(i==0)?1:0;j<=9;j++){
         lexographical(n,10*i+j);
     }
 }
 int main(){
     int n;
     cin>>n;
     lexographical(n,0);
     return 0;
 }
