#include<bits/stdc++.h>
using namespace std;
int m,n;
int ack(int m,int n){
    if(m==0)
        return n+1;
    if(n==0)
        return ack(m-1,1);
    return ack(m-1,ack(m,n-1));
}
int main(){
    cin>>m>>n;
    cout<<ack(m,n);
}