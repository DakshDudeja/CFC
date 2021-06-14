#include<bits/stdc++.h>
using namespace std;
int tp=0;

bool IsSafe(vector<vector<bool>>&visited,int i,int j, int m,int n){
  if(visited[i][j]==false && i<=m and j<=n and i>=0 and j>=0)
  return true;
}
void RatinMaze(vector<vector<int>>&grid ,int i, int j,int m , int n,vector<vector<bool>>&visited){
    if(i==m and j==n){
        tp++;
        return ;
    }
    if(not IsSafe(visited,i,j,m,n))
    return;

    visited[i][j]=true;

    if(grid[i+1][j]==0 and i+1<=m ){
        RatinMaze(grid,i+1,j,m,n,visited);
    }
    if(grid[i][j+1]==0 and j+1<=n)
    RatinMaze(grid,i,j+1,m,n,visited);

    visited[i][j]=false;
    return;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>grid(n ,(vector<int>(n,0)));
    for (int i = 0; i <= n-1; i++){
        for (int j = 0; j <= n-1; j++){
            cin>>grid[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    vector<vector<bool>>visited(n,vector<bool>(n,false));
    RatinMaze(grid,0,0,2,2,visited);
    cout<<"total paths are "<<tp;
    return 0;

}