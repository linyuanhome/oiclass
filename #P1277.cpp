#include<bits/stdc++.h>
using namespace std;
queue<int>n;
char in;
int main(){
    while(cin>>in){
        if(in=='O')
            if(n.empty())
                cout<<"None"<<endl;
            else{
                cout<<n.front()<<endl;
                n.pop();
            }
        else{
            int ini;
            cin>>ini;
            n.push(ini);
        }
    }
}