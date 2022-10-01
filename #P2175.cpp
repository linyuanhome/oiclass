#include<bits/stdc++.h>
using namespace std;
int n,sum,ans;
bool zs(int x){
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
            return false;
    return true;
}
int main(){
    cin>>n;
    for(int i=2;i<=n;i++)
        if(zs(i)){
            ans++;
            sum+=i;
        }
    cout<<ans<<' '<<sum;
}