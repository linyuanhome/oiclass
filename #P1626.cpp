#include<bits/stdc++.h>
using namespace std;
int n,a[30005];
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    if(n&1)
        cout<<a[n/2];
    else
        cout<<(a[n/2-1]+a[n/2])/2;
}