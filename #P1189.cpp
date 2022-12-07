#include<bits/stdc++.h>
using namespace std;
int n,m,in,sum;
bool a[61][61];
void dfs(int x,int y){
    if(x<0||y<0||x==n||y==m||!a[x][y])
        return;
    a[x][y]=false;
    dfs(x+1,y);
    dfs(x,y+1);
    dfs(x-1,y);
    dfs(x,y-1);
}
int main(){
    cin>>n>>m;
    for(auto i=0;i<n;i++)
        for(auto j=0;j<m;j++){
            char in;
            cin>>in;
            if(in!='0')
                a[i][j]=true;
            else
                a[i][j]=false;
        }
    for(auto i=0;i<n;i++)
        for(auto j=0;j<m;j++)
            if(a[i][j]){
                dfs(i,j);
                sum++;
            }
    cout<<sum;
}