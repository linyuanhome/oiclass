#include<bits/stdc++.h>
using namespace std;
string f90(string s){
    string o;
    for(int i=s.size()-1;i>=0;i--)
        o+=s[i];
    return o;
}
string a;
int n;
int main(){
	cin>>n;
	while(n){
		if(n%26==0){
			a+='Z';
			n--;
		}
		else 
            a+=char(n%26+'A'-1);
		n/=26;
	}
    a=f90(a);
	cout<<a;
}
