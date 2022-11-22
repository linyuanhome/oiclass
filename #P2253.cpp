#include<bits/stdc++.h>
using namespace std;
vector<int>a;
int n,i=1;
int main(){
    cin>>n;
    while(n--){
        char in;
        cin>>in;
        if(in=='A'){
            cin>>in;
            if(in=='L')
                a.insert(a.begin(),i++);
            else
                a.insert(a.end(),i++);
        }
        else{
            int k;
            cin>>in>>k;
            if(in=='L')
                a.erase(a.begin(),a.begin()+k);
            else
                a.erase(a.end()-k,a.end());
        }
    }
    for(auto i:a)
        cout<<i<<endl;
}