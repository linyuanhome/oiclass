#include<bits/stdc++.h>
using namespace std;
long long k,n,sum;
int main(){
	cin>>n>>k;
	for(long long i=1;i<n;i++){
		long long x=i;
		bool flag=false;
		while(x){
			if(x%10>k)
				flag=true;
			x/=10;
		}
		if(!flag)
			sum++;
	}
	cout<<sum;
}
