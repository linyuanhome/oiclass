#include<bits/stdc++.h>
using namespace std;
int n,ans;
struct Rabbit{
    int t, d;
    double v;
    friend inline bool operator<(Rabbit x,Rabbit y){
        return x.v<y.v;
    }
};
Rabbit a[105];
int main(){
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i].t>>a[i].d;
        a[i].v=(double)a[i].t/a[i].d;
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;++i){
        a[i].t=2*a[i].t+a[i-1].t;
        ans+=a[i-1].t*a[i].d;
    }
    cout<<ans;
}