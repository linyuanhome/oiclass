#include<bits/stdc++.h>
using namespace std;
unsigned long long n,m,t;
int main(){
	cin>>n>>m;
	t=n;
	n=min(n,m);
	m=max(t,m);
	while(m%n!=0)
		m*=2;
	cout<<m;
}

