#include<bits/stdc++.h>
using namespace std;
int n,m,k,a[55][100005];
int main(){
	cin>>n>>m>>k;
	for(int i=0;i<m;i++){
        int d,b,e;
		cin>>d>>b>>e;
		a[d-1][b-1]++;
		a[d-1][e-1]--;
	}
	for(int i=0;i<k;i++){
		int maxv=0,s=0;
		for(int j=0;j<n;j++){
			s+=a[i][j];
			maxv=max(maxv,s);
		}
		cout<<maxv<<endl;
	}
}