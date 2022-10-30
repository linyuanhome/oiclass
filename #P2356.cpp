#include<bits/stdc++.h>
using namespace std;
int n,in,k;
int main(){
    cin>>n;
    while(n--){
        cin>>in;
        k^=in;
    }
    cout<<k;
}