#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fact=1;
    for (int i = 0;i < n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}