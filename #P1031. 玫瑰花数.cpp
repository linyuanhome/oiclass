#include<bits/stdc++.h>
using namespace std;
int f(int n,int i){
	if(i==1)
		return n;
	return n*f(n,i-1);
}
bool flow(int x){
	int x1=x/1000,x2=x/100%10,x3=x/10%10,x4=x%10;
	return f(x1,4)+f(x2,4)+f(x3,4)+f(x4,4)==x;
}
int main(){
	for(int i=1000;i<10000;i++)
		if(flow(i))
			cout<<i<<endl;
}
