#include<bits/stdc++.h>
using namespace std;
long long b,e,sum;
int main(){
	cin>>b>>e;
	for(long long i=b;i<=e;i++){
		long long x=i;
		while(x){
			if(x%10==2)
				sum++;
			x/=10;
		}
	}
	cout<<sum;
}
