#include<bits/stdc++.h>
using namespace std;
int n,l,k,ans;
bool flag;
priority_queue<int,vector<int>,greater<int>>q;
int main(){
    cin>>n>>l>>k;
    while(n--){
        int in;
        cin>>in;
        q.push(in);
    }
    n=q.size();
    for(int i=0;i<n;i++)
        if(q.top()<=l){
            q.pop();
            l+=k;
            ans++;
        }
        else{
            cout<<ans;
            return 0;
        }
    cout<<n;
}