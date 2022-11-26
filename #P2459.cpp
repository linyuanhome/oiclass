#include<bits/stdc++.h>
using namespace std;
string s;
string f(string x) {
	if(x.size()&1)
        return x;
    for(auto i=0;i<x.size()/2;i++)
        if(x[i]!=x[x.size()-i-1])
            return x;
	return f(x.substr(x.size()/2));
}
int main() {
	cin>>s;
	cout<<f(s).size()<<endl;
}