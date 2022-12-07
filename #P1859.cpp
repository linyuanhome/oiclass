#include<bits/stdc++.h>
using namespace std;
int n,m,a[42][42];
int dfs(int x,int y){
    if(x==n&&y==m)
        return a[x][y];
    int s=a[x][y],maxv=max(a[x+1][y],max(a[x-1][y],max(a[x][y+1],a[x][y-1])));
    a[x][y]=0;
    if(maxv==a[x+1][y])
        return s+dfs(x+1,y);
    else if(maxv==a[x][y+1])
        return s+dfs(x,y+1);
    else if(maxv==a[x][y-1])
        return s+dfs(x,y-1);
    else
        return s+dfs(x-1,y);
}
int main(){
    cin>>n>>m;
    for(auto i=1;i<=n;i++)
        for(auto j=1;j<=m;j++)
            cin>>a[i][j];
    cout<<dfs(1,1);
}