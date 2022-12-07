#include<bits/stdc++.h>
using namespace std;
int n,m,a[101][101];
void dfs(int x,int y,int f){
    if(x<0||y<0||x==n||y==n||a[x][y]!=f)
        return;
    a[x][y]=0;
    dfs(x+1,y,f);
    dfs(x,y+1,f);
    dfs(x-1,y,f);
    dfs(x,y-1,f);
}
void down(int x,int y){
    if(x>=n-1||a[x+1][y]!=0)
        return;
    swap(a[x][y],a[x+1][y]);
    down(x+1,y);
}
int main(){
    cin>>n>>m;
    for(auto i=0;i<n;i++)
        for(auto j=0;j<n;j++)
            cin>>a[i][j];
    dfs(n-1,m-1,a[n-1][m-1]);
    for(auto i=n-2;i>=0;i--)
        for(auto j=0;j<n;j++)
            down(i,j);
    for(auto i=0;i<n;i++){
        for(auto j=0;j<n;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
}