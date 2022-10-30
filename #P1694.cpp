#include<bits/stdc++.h>
using namespace std;
struct file{
	int num; 
	string filename, basename, extraname;
	void init(int x){
        num=x;
        cin>>filename;
		int idx=filename.find('.');
		if(idx!=filename.npos){
			basename=filename.substr(0, idx);
			extraname=filename.substr(idx + 1);
		}
        else
			basename=filename;
	}
}a[101];
bool cmp(file a, file b){
	if(a.extraname==""^b.extraname=="")
		return a.extraname!="";
    if(a.extraname!=""&&b.extraname!=""&&a.extraname!=b.extraname)
        return a.extraname<b.extraname;
	return a.basename<b.basename; 
}
int n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		a[i].init(i+1);
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
		cout<<a[i].num<<endl;
}
