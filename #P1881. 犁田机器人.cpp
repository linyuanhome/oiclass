#include<bits/stdc++.h>
using namespace std;
int x,y,n,sum,xu,yu,xur,yur;
bool flag[245][245];
int main(){
    cin>>x>>y>>n;
    while(n--){
        cin>>xu>>yu>>xur>>yur;
        for(int i=xu-1;i<xur;i++)
            for(int j=yu-1;j<yur;j++)
                if(!flag[i][j]){
                    sum++;
                    flag[i][j]=true;
                }
    }
    cout<<sum;
}
