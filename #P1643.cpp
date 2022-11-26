#include<bits/stdc++.h>
using namespace std;
int n;
int g(int x){
    if(x==0)
        return 0;
    return x-g(g(x-1));
}
int main(){
    cin>>n;
    cout<<g(n);
}