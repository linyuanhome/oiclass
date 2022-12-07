#include<bits/stdc++.h>
using namespace std;
int n,ans,la[1001];
bool a[1001][2001];
string in;
void dfs(int x,int y){
    if(x<0||y<0||x==n||y==la[x]||!a[x][y])
        return;
    a[x][y]=false;
    dfs(x+1,y);
    dfs(x,y+1);
    dfs(x-1,y);
    dfs(x,y-1);
}
int main(){
    cin>>n;
    getline(cin,in);
    for(int i=0;i<n;i++){
        getline(cin,in);
        for(int j=0;j<in.size();j++)
            if(in[j]!='*'&&in[j]!=' ')
                a[i][j]=true;
        la[i]=in.size();
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<la[i];j++)
            if(a[i][j]){
                dfs(i,j);
                ans++;
            }
    cout<<ans; 
}