#include<bits/stdc++.h>
using namespace std;
long m,t,u,f,d,sum;
int main(){
	cin>>m>>t>>u>>f>>d;
	while(t--){
		int in;
		cin>>in;
		if(in==1&&m>=u)
			m-=u;
		else if(in==2&&m>=f)
			m-=f;
		else if(m>=d)
			m-=d;
		else{
			cout<<sum;
			return 0;
		}
		sum++;
	}
	cout<<sum;
}
