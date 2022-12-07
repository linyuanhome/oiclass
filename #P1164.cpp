#include<bits/stdc++.h>
using namespace std;
int n,ans=1;
void f(char a,char b,char c,int d){
	if(d==0)
        return;
	f(a,c,b,d-1);
	cout<<cnt++<<' '<<a<<"->"<<c<<endl;
	f(b,a,c,d-1);
}
int main(){
	cin>>n;
	f('A','B','C', n);
}