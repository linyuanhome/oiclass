#include<bits/stdc++.h>
using namespace std;
long n,sum,now;
int main(){
	cin>>n;
	while(n--){
		int in;
		cin>>in;
		if(now+in<0){
			sum+=abs(now+in);
			now=0;
		}
		else
			now+=in;
	}
	cout<<sum;
}
