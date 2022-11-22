#include<bits/stdc++.h>
using namespace std;
int ans=1;
int f=1,noww=200005,ans=1;
struct node {
    int tail, p;
} s[200005];
bool cmp(node x, node y){
    if (x.tail == y.tail) 
        return x.p < y.p;
    return x.tail < y.tail;
}
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i].tail;
        s[i].p = i;
    }
    sort(s+1,s+n+1,cmp);
    for (int i=1;i<=n;) {
        int j = i;
        while(s[j+1].tail==s[j].tail&&j<n)
            j++;
        if (f == 1) {
            if(s[j].p<noww)
                noww=s[i].p;
            else{
                f=0;
                noww=s[j].p;
            }
            
        } 
		else{
            if(s[i].p>noww) 
                noww=s[j].p;
            else{
                f=1;
                ans++;
                noww=s[i].p;
            }
        }
        i = j+1;
    }
    cout<<ans;
}
