#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f,g;
int gcdx(int y,int z,int x){
	if(y%z==0)
		return y;
	return gcdx(y+x,z,x);
}
int gcd(int y,int z){
	int t=y;
	y=max(y,z);
	z=min(t,z);
	if(y%z==0)
		return z;
	return gcd(z,y%z);
}
int main(){
	cin>>a>>b>>c>>d;
	g=gcdx(b,d,b);
	f=g;
	e=a*(g/b);
	e+=c*(g/d);
	g=gcd(e,f);
	if(g!=1){
		e/=g;
		f/=g;
	}
	cout<<e<<' '<<f;
}
