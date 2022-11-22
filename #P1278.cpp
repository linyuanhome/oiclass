#include<bits/stdc++.h>
using namespace std;
int n,m,f;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        f=(f+m)%i;
        cout<<f<<' '<<i<<endl;
    }
    cout<<f+1;
}