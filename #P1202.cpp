#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
char a[501][501];
void dfs(int x,int y){
    if(x<0||y<0||x==n||y==m||a[x][y]=='*')
        return;
    a[x][y]='*';
    ans--;
    dfs(x+1,y);
    dfs(x,y+1);
    dfs(x-1,y);
    dfs(x,y-1);
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='0')
                ans++;
        }
    for(int i=0;i<n;i++){
        dfs(i,m-1);
        dfs(i,0);
    }
    for(int i=0;i<m;i++){
        dfs(0,i);
        dfs(n-1,i);
    }
    cout<<ans;
}