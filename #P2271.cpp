#include<bits/stdc++.h>
using namespace std;
string a;
stack<int>z;
int ans;
int main(){
    cin>>a;
    for(int i=0;i<a.size();i++)
        if(a[i]=='(')
            z.push(1);
        else if(z.empty()){
            ans++;
            z.push(1);
        }
        else
            z.pop();
    ans+=z.size()/2;
    cout<<ans;
}