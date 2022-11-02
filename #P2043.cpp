#include<bits/stdc++.h>
using namespace std;
long long n,t,k,ans,a[100002],cnt,x,y;
int main(){
	cin>>n>>t;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans+=a[i];
		while(ans>t)
			ans-=a[++cnt];
		if(i-cnt>y-x) 
			x=cnt,y=i;
	}
	cout<<x+1<<' '<<y;
}