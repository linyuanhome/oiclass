#include<bits/stdc++.h>
using namespace std;
class cd{
private:
    vector<int>cdv;
public:
    cd(int x);
    void add(int b,int e){
        cdv[b]+=1;
		cdv[e+1]-=1;
    }
    int output(){
        vector<int>a={cdv[0]};
        for(int i=1;i<cdv.size();i++)
		    a.push_back(a[a.size()-1]+cdv[a.size()]);
        sort(a.begin(),a.end());
        return a[cdv.size()/2];
    }
};
cd::cd(int x){
    for(int i=0;i<=x;i++)
        cdv.push_back(0);
}
int n,k;
int main(){
    cin>>n>>k;
    cd a={n};
    while(k--){
        int b,e;
        cin>>b>>e;
        a.add(b,e);
    }
    cout<<a.output();
}