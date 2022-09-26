#include<bits/stdc++.h>
using namespace std;
int n,t,sum;
int main(){
	cin>>n>>t;
	while(n--){
		int in;
		cin>>in;
		sum+=in-t;
	}
	cout<<sum;
}
