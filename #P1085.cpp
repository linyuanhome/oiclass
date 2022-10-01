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
int tj(){
    int sum=0;
    for(long long i=0;i<n;i++)
        for(long long j=0;j<n;j++)
            if(b[i][j]=='1')
                sum++;
    return sum;
}
void t90(){
    a=f90(a);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]=='1')
                b[i][j]='1';
}
int main(){
    cin>>n;
    init(a);
    init(b);
    for(long long i=0;i<n;i++)
        for(long long j=0;j<n;j++)
            cin>>a[i][j];
    b=a;
    cout<<tj()<<endl;
    t90();
    cout<<tj()<<endl;
    t90();
    cout<<tj()<<endl;
    t90();
    cout<<tj()<<endl;
    return 0;
}