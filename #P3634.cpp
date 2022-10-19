#include<iostream>
using namespace std;
int a[20][20],m,n;
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=i;j++)
			if(j==1)
				a[i][j]=i;
			else
				a[i][j]=a[i-1][j-1]*a[i][j-1]/(a[i][j-1]-a[i-1][j-1]);
	cout<<"1/"<<a[m][n];
}
