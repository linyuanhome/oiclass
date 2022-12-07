#include<bits/stdc++.h>
using namespace std;
int w,h,dx,dy;
char a[21][21];
int dfs(int x,int y){
    if(x<0||y<0||x==h||y==w||a[x][y]=='#')
        return 0;
    a[x][y]='#';
    return dfs(x+1,y)+dfs(x,y+1)+dfs(x-1,y)+dfs(x,y-1)+1;
}
int main(){
    cin>>w>>h;
    while(w!=0||h!=0){
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++){
                cin>>a[i][j];
                if(a[i][j]=='@'){
                    dx=i;
                    dy=j;
                }
            }
        cout<<dfs(dx,dy)<<endl;
        cin>>w>>h;
    }
}