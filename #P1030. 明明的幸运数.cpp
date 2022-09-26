#include<bits/stdc++.h>
using namespace std;
int n,sum;
int main(){
	cin>>n;
	for(int i=3;i<=n;i++)
		if(i%3==0)
			sum++;
	cout<<sum;
}
