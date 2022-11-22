#include<bits/stdc++.h>
using namespace std;
queue<int>q;
int n;
int main(){
    cin>>n;
    for(auto i=1;i<=n;i++)
        q.push(i);
    while(q.size()>1){
        cout<<q.front()<<' ';
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout<<q.front()<<' ';
}