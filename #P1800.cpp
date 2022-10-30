#include<bits/stdc++.h>
using namespace std;
const int N=1e4+10;
struct node{
	string n,name;
}a[N];
int n;
bool cmp(node a,node b){
	if(a.n.size()!=b.n.size())
        return a.n.size()>b.n.size();
	if(a.n!=b.n)
        return a.n>b.n;
	return a.name<b.name;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i].name>>a[i].n;
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++) 
        cout<<a[i].name<<endl; 
}
