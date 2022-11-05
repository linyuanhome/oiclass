#include<bits/stdc++.h>
using namespace std;
class cd{
private:
    vector<int>x;
    vector<int>y;
public:
    cd();
    void add(int n1x,int n1y,int n2x,int n2y,int n3x,int n3y){
        int b=min(n1x,min(n2x,n3x))+1,e=max(n1x,max(n2x,n3x))-1;
        x[b]+=1;
		x[e+1]-=1;
        b=min(n1y,min(n2y,n3y))+1;
        e=max(n1y,max(n2y,n3y))-1;
        y[b]+=1;
		y[e+1]-=1;
    }
    int outx(int in){
        vector<int>a={x[0]};
        for(int i=1;i<in;i++)
		    a.push_back(a[i-1]+x[i]);
        return a[in-1];
    }
    int outy(int in){
        vector<int>a={y[0]};
        for(int i=1;i<in;i++)
		    a.push_back(a[i-1]+y[i]);
        return a[in-1];
    }
};
cd::cd(){
    for(int i=0;i<=1000;i++)
        x.push_back(0);
    for(int i=0;i<=1000;i++)
        y.push_back(0);
}
int n,d;
int main(){
    cin>>n;
    cd a;
    while(n--){
        int n1x,n2x,n3x,n1y,n2y,n3y;
        cin>>n1x>>n1y>>n2x>>n2y>>n3x>>n3y;
        a.add(n1x,n1y,n2x,n2y,n3x,n3y);
    }
    cin>>d;
    while(d--){
        string ins;
        int ini;
        cin>>ins;
        if(ins=="x"){
            cin>>ins>>ini;
            cout<<a.outx(ini)<<endl;
        }
        else{
            cin>>ins>>ini;
            cout<<a.outy(ini)<<endl;
        }
    }
}