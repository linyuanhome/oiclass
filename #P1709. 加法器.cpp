#include<bits/stdc++.h>
using namespace std;
string n;
bool flag;
int i;
int main(){
	cin>>n;
	if(n[0]=='-'){
		cout<<'-';
		n[0]=' ';
	}
	for(i=n.size()-1;;i--)
		if(n[i]!=0){
			flag=true;
			cout<<n[i];
			i--;
			break;
		}
	while(i-->=0)
		cout<<n[i];
	if(!flag)
		cout<<0;
}
