#include<bits/stdc++.h>
using namespace std;
typedef vector<vector<char> > vll;
vll a,b;
long long n;
void init(vll &p){
    p.clear();
    for(long long i=0;i<n;i++){
        vector<char> tmp;
        for(long long j=0;j<n;j++)
            tmp.push_back(0);
        p.push_back(tmp);
    }
}
vll f90(vll tp){
    vll res;
    init(res);
    for(long long i=0;i<n;i++)
        for(long long j=0;j<n;j++)
            res[i][j]=tp[n-j-1][i];
    return res;
}
vll f180(vll tp){
    tp=f90(tp);
    tp=f90(tp);
    return tp;
}
vll f270(vll tp){
    tp=f90(tp);
    tp=f90(tp);
    tp=f90(tp);
    return tp;
}
vll fs(vll tp){
    for(long long i=0;i<n;i++){
        for(long long l=0,r=n-1;l<r;l++,r--)
        swap(tp[i][l],tp[i][r]);
    }
    return tp;
}
bool zh(vll tp,vll ttp){
    tp=fs(tp);
    vll tmp=f90(tp);
    if(tmp==ttp)    
        return true;
    tmp=f90(tmp);
    if(tmp==ttp)
        return true;
    tmp=f90(tmp);
    if(tmp==ttp)    
        return true;
    return false;
}
int main(){
    cin>>n;
    init(a);
    init(b);
    for(long long i=0;i<n;i++)
        for(long long j=0;j<n;j++)
            cin>>a[i][j];
    for(long long i=0;i<n;i++)
        for(long long j=0;j<n;j++)
            cin>>b[i][j];
    if(f90(a)==b)
        cout<<1;
    else if(f180(a)==b)
        cout<<2;
    else if(f270(a)==b)
        cout<<3;
    else if(fs(a)==b)
        cout<<4;
    else if(zh(a,b))
        cout<<5;
    else if(a==b)
        cout<<6;
    else 
        cout<<7;
}