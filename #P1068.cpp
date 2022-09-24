#include<bits/stdc++.h>
using namespace std;
string w;
int maxn,minn=0xff,a[26];
bool zs(int n){
	if(n<2)
        return false;
	for(int i=2;i*i<n;i++)
		if(n%i==0)
            return false;
	return true;
}
int main(){
	cin>>w;
	for(int i=0;i<w.size();i++)
        a[w[i]-'a']++;
	for(int i=0;i<26;i++){
		if(maxn<a[i])
            maxn=a[i];
		if(minn>a[i]&&a[i]!=0)
            minn=a[i];
	}
	if(zs(maxn-minn))
        cout<<"Lucky Word"<<endl<<maxn-minn;
	else 
        cout<<"No Answer"<<endl<<0;
}