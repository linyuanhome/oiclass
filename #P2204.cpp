#include<bits/stdc++.h>
using namespace std;
int n,m,f[310][310],a[310][310],ans[310];
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            if(a[i][j]==1)
                f[i][j]=min(f[i-1][j-1],min(f[i][j-1],f[i-1][j]))+1;
            for(int k=1;k<=f[i][j];k++)
                ans[k]++;
        }
    for(int i=0;i<n;i++)
        if(ans[i])
            cout<<i+1<<' '<<ans[i];
}