
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter roes and cols\n";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter elemnts\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The elements are\n";
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                
                cout<<arr[i][j]<<"\t";
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
               
                cout<<arr[i][j]<<"\t";
            }
        }
    }
    return 0;
}