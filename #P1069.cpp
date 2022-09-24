#include<bits/stdc++.h>
using namespace std;
long long r1=1,r2=1;
string a1,a2;
int main(){
    cin>>a1>>a2;
    for(int i=0;i<a1.size();i++){
        r1*=a1[i]-'A'+1;
        r1%=47;
    }
    r1%=47;
    for(int i=0;i<a2.size();i++){
        r2*=a2[i]-'A'+1;
        r2%=47;
    }
    r2%=47;
    if(r1==r2)
        cout<<"GO"<<endl<<"r1=r2="<<r1;
    else
        cout<<"STAY"<<endl<<"r1="<<r1<<' '<<"r2="<<r2; 
}