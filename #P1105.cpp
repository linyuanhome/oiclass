#include<bits/stdc++.h>
using namespace std;
int n;
bool a[1005];
queue<int>o;
int main(){
    cin>>n;
    while(n--){
        int in;
        cin>>in;
        a[in]=true;
    }
    for(int i=0;i<=1000;i++)
        if(a[i])
            o.push(i);
    cout<<o.size()<<endl;
    int ol=o.size();
    for(int i=0;i<ol;i++){
        cout<<o.front()<<' ';
        o.pop();
    }
}