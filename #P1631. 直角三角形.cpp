#include<bits/stdc++.h>
using namespace std;
int n;
bool f(string a){
	if(a.find('a')<a.size())
		return true;
	return false;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		if(i%7==0||f(to_string(n)))
			cout<<i<<endl;
}
