#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter the elements\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
     cout<<"The diagonal display is\n";
    for(int k=0;k<m;k++){
        int i=0,j=i+k;
        while(i<n && j<m){
            cout<<arr[i][j]<<endl;
            i++;
            j++;
        }
    }

    return 0;
}