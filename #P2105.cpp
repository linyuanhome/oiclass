#include<iostream>
using namespace std;
double a;
int n,b,sum;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b; 
		for(int j=1;j<=b;j++){
			int k=a*j;
			sum^=k;
		}
	}
	cout<<sum; 
}
