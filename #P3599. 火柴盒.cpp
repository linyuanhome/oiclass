#include<bits/stdc++.h>
using namespace std;
int n,x,y,t,sum;
int main(){
	cin>>n>>x>>y;
	t=x*x+y*y;
	while(n--){
		int in;
		cin>>in;
		if(in*in<=t)
			sum++;
	}
	cout<<sum;
}
