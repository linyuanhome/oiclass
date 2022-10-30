#include<bits/stdc++.h>
using namespace std; 
map<int,int> cnt;
vector<int> a;
int n,t,maxv;
int main(){
	cin>>n;
	while(n--){
		cin>>t;
		cnt[t]++;
	}
	for(auto i=cnt.begin();i!=cnt.end();i++)
		if(i==cnt.begin()||i->second>maxv)
            maxv=i->second;
	for(auto i=cnt.begin();i!=cnt.end();i++)
		if(i->second==maxv) 
            a.push_back(i->first);	
	cout <<a.size()<<endl;
	sort(a.begin(),a.end());
	for(int i=0;i<a.size();i++)
        cout<<a[i]<<' ';
}