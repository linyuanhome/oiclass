#include<bits/stdc++.h>
using namespace std;
int a[1001][1001],n,m;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	for(int i=1;i<=m;i++){
		for(int j=n;j>=1;j--)
			cout<<a[j][i]<<" ";
		cout<<endl;
    }
}