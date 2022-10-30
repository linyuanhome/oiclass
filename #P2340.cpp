#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    if(n%4==1)
        cout<<1;
    else if(n%4==2)
        cout<<n+3;
    else if(n%4==3)
        cout<<0;
    else 
        cout<<n;
}