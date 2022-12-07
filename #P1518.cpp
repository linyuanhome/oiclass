#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
void f(){
    if(n==0){
        n++;
        ans++;
    }
    if(abs(m-n*2)>=abs(m-n))
        return;
    ans++;
    n*=2;
    f();
    return;
}
int main(){
    cin>>n>>m;
    if(m==n){
        cout<<0;
        return 0;
    }
    if(n<m)
        f();
    ans+=abs(m-n);
    cout<<ans-1;
}