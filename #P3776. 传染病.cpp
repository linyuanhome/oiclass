#include<bits/stdc++.h>
using namespace std;
long n,sum=1,i=1;
int main(){
	cin>>n;
	while(sum<=n){
		sum*=3;
		i++;
	}
	cout<<i;
}
