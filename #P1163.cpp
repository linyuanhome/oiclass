#include<bits/stdc++.h>
using namespace std;
int a,b,c,dw[25][25][25];
string an,bn,cn;
bool f[25][25][25];
int w(int a,int b,int c){
    if(a<=0||b<=0||c<=0)
        return 1;
    if(a>20||b>20||c>20)
        a=b=c=20;
    if(f[a][b][c])
        return dw[a][b][c];
    if(a<b&&b<c)
        dw[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
    else 
        dw[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
    f[a][b][c]=true;
    return dw[a][b][c];
}
int main(){
    while(true){
        cin>>an>>bn>>cn;
        if(an.size()>2){
            if(an[0]=='-')
                cout<<"w("<<an<<", "<<bn<<", "<<cn<<") = "<<1<<endl;
            else
                cout<<"w("<<an<<", "<<bn<<", "<<cn<<") = "<<w(20,20,20)<<endl;
            continue;
        }
        if(bn.size()>2){
            if(bn[0]=='-')
                cout<<"w("<<an<<", "<<bn<<", "<<cn<<") = "<<1<<endl;
            else
                cout<<"w("<<an<<", "<<bn<<", "<<cn<<") = "<<w(20,20,20)<<endl;
            continue;
        }
        if(cn.size()>2){
            if(cn[0]=='-')
                cout<<"w("<<an<<", "<<bn<<", "<<cn<<") = "<<1<<endl;
            else
                cout<<"w("<<an<<", "<<bn<<", "<<cn<<") = "<<w(20,20,20)<<endl;
            continue;
        }
        a=stoi(an);
        b=stoi(bn);
        c=stoi(cn);
        if(a==-1&&b==-1&&c==-1)
            return 0;
        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<endl;
    }
}