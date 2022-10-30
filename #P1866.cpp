#include<bits/stdc++.h>
using namespace std;
int a,b,x,ans;
bool flag;
int main(){
    cin>>a>>b;
    x=a&b;
    for(int i=0;i<8;i++){
        if(x%2==1){
            cout<<i+1<<" ";
            ans++;
        }
        x>>=1;
        flag=true;
    }
    if(!flag) 
        cout<<0;
    cout<<endl;
    if (ans>1)
        cout<<"Yes";
    else 
        cout<<"NO";
}