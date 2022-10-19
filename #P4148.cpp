#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005][1005],b[1005][1005];
int main(){
    memset(a,-1,sizeof(a));
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int x=9;
            if(a[i+1][j]==-1)x--;
            if(a[i][j+1]==-1)x--;
            if(a[i+1][j+1]==-1)x--;
            if(a[i-1][j-1]==-1)x--;
            if(a[i][j-1]==-1)x--;
            if(a[i-1][j]==-1)x--;
            if(a[i+1][j-1]==-1)x--;
            if(a[i-1][j+1]==-1)x--;
            cout<<(a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1]+a[i-1][j-1]+a[i][j-1]+a[i-1][j]+a[i+1][j-1]+a[i-1][j+1]+(9-x))/x<<' ';
        }
        cout<<endl;
    }
}