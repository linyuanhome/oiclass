#include<bits/stdc++.h>
using namespace std;
int n,gz,now,sum;
int main(){
	cin>>gz>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(now+a<=gz)
			sum++;
		now+=a;
	}
	cout<<sum;
}
