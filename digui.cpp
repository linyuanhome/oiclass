#include<bits/stdc++.h>
using namespace std;
int outv[105]={0,1,1};
int out(int x){
    if(outv[x]==0)
        outv[x]=out(x-1)+out(x-2);
    return outv[x];
}
int main(){
    int n;
    cin>>n;
    cout<<out(n);
}