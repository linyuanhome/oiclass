#include<bits/stdc++.h>
using namespace std;
string out,in;
bool flag;
int main(){
    cin>>in;
    while(in[in.size()-1]!='.'){
        if(in.find('a')!=string::npos&&in.size()>out.size()){
            out=in;
            flag=true;
        }
        cin>>in;
    }
    if(in.find('a')!=string::npos&&in.size()-1>out.size()){
        cout<<in;
        return 0;
    }
    if(!flag)
        cout<<"NO";
    else
        cout<<out;
}