#include<bits/stdc++.h>
using namespace std;
string k,c,ans;
int main(){
	cin>>k>>c;
	for(int i=k.size();i<c.size();i++)
        k+=k[i-k.size()];
	for(int i=0,t;i<c.size();i++){
		if('a'<=k[i]&&k[i]<='z')
            t=k[i]-'a';
		else 
            t=k[i]-'A';
		ans+=c[i]-t;
		if('a'<=c[i]&&c[i]<='z'&&ans[i]<'a')
			ans[i]+=25;
		else if(ans[i]<'A')
            ans[i]+=26;
	}
	cout<<ans;
	return 0;
}
