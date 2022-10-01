#include<bits/stdc++.h>
using namespace std;
int n,m,a[55][55],dp[55][55];
int main(){
    memset(a,-1,sizeof(a));
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    for(int i=1;i<=m;i++){
        int x=1,y=i;
        while(a[x][y]!=-1)
            dp[x++][y--]=max(dp[x-1][y],dp[x][y-1])+a[x][y];
    }
    for(int i=2;i<=n;i++){
        int x=i,y=m;
        while(a[x][y]!=-1)
            dp[x++][y--]=max(dp[x-1][y],dp[x][y-1])+a[x][y];
    }
    cout<<dp[n][m];
}