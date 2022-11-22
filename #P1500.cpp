#include<bits/stdc++.h>
using namespace std;
queue<int>q;
bool flag[1005];
int ans,n,m;
int main(){
    cin>>m>>n;
    while(n--){
        int in;
        cin>>in;
        if(!flag[in]&&q.size()<m){
            q.push(in);
            flag[in]=true;
            ans++;
        }
        else if(!flag[in]){
            flag[q.front()]=false;
            q.pop();
            q.push(in);
            flag[in]=true;
            ans++;
        }
    }
    cout<<ans;
}