#include<bits/stdc++.h>
using namespace std;
int ai,bi,s;
string a,b;
int intf(char x){
	return int(x-'0');
}
int main(){
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
		for(int j=0;j<b.size();j++)
			s+=intf(a[i])*intf(b[j]);
	cout<<s;
}
