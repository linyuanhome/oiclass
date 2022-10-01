#include<bits/stdc++.h>
using namespace std;
int n,a[5005],maxa,maxz,zys0[20005];
bool zs(int x){
    if(x==1)
        return false;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
            return false;
    return true;
}
int zys(int x){
    if(zys0[x]!=0)
        return zys0[x];
    for(int i=x;i;i--)
        if(x%i==0&&zs(i)){
            zys0[x]=i;
            return i;
        }
    return 1;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(zys(a[i])>maxz){
            maxz=zys(a[i]);
            maxa=a[i];
        }
    }
    cout<<maxa;
}