#include<bits/stdc++.h>
using namespace std;
long long n,a[100008],sum;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]>sum+1){
            cout<<sum+1;
            return 0;
        }
        sum+=a[i];
    }
    cout<<sum+1;
}