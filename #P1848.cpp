#include<bits/stdc++.h>
using namespace std;
string a,b;
int sum,s;
int main(){
    cin>>a>>b; 
    sum=min(a.size(),b.size());
    s=min(a.size(),b.size());
    while(b.substr(0,sum)!=a.substr(a.size()-sum)&&sum)
        sum--;
    while(a.substr(0,s)!=b.substr(b.size()-s)&&s)
        s--;
    cout<<max(sum,s);
}