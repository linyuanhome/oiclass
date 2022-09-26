#include<bits/stdc++.h>
using namespace std;
int n;
int defen(int x,int y){
	if(x<=y)
		return x;
	return defen(x/10,y);
}
int main(){
	cin>>n;
	while(n--){
		int s,t,ti,rt;
		cin>>s>>t>>ti>>rt;
		if(rt>ti)
			cout<<"Time Limit Exceeded"<<endl;
		else if(defen(s,t)!=t)
			cout<<"Wrong Answer"<<endl;
		else
			cout<<"Accepted"<<endl;
	}
}
