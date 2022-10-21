#include<bits/stdc++.h>
using namespace std;
long long ans,n;
string a;
string f90(string s){
	string o;
	bool zero=true;
	o.clear();
	for(int i=s.size()-1;i>=0;i--){
		if (zero&&s[i]=='0')
            continue;
		else{
			zero=false;
			o+=s[i];
		}
	}
	return o;
}
bool hw(string s){
	int i=0,j=s.size()-1;
	while(j>i){
		if(s[i]!=s[j])
			return false;
		i++;
		j--;
	}
	return true;
}
int main(){
	cin>>a;
	n=stoll(a);
	while(ans<=30){
		ans++;
		n+=stoll(f90(a));
		a=to_string((n));
		if(hw(a)){
			cout<<ans;
			return 0;
		}
	}
	cout<<-1;
}