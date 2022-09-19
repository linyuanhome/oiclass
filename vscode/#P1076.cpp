#include<bits/stdc++.h>
using namespace std;
int sum,n[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
string a;
int main(){
    while(getline(cin,a),a!=""){
        sum=0;
        for(int i=0;i<a.size();i++)
            if(a[i]>='a'&&a[i]<='z')
                sum+=n[a[i]-'a'];
            else
                sum++;
        cout<<sum<<endl;
    }
}