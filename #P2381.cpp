#include<bits/stdc++.h>
using namespace std;
bool flag;
vector<int>a;
int n;
int main(){
    cin>>n;
    while(n--){
        int in;
        cin>>in;
        if(flag)
            a.insert(a.begin(),in);
        else
            a.push_back(in);
        flag=!flag;
    }
    if(flag)
        for(int i=a.size()-1;i>=0;i--)
            cout<<a[i]<<' ';
    else
        for(auto i:a)
            cout<<i<<' ';
}