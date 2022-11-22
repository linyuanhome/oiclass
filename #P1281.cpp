#include<bits/stdc++.h>
using namespace std;
int n,i=1;
stack<int>a;
queue<int>out;
int main(){
    cin>>n;
    while(n--){
        char in;
        cin>>in;
        if(in=='A')
            out.push(i++);
        else if(in=='B'){
            a.push(i++);
            if(a.size()==6){
                cout<<"No";
                return 0;
            }
        }else{
            if(a.empty()){
                cout<<"No";
                return 0;
            }
            out.push(a.top());
            a.pop();
        }
    }
    int leno=out.size();
    cout<<"Yes"<<endl;
    while(leno--){
        cout<<out.front()<<endl;
        out.pop();
    }
}