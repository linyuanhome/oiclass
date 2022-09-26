#include<bits/stdc++.h>
using namespace std;
double n;
int main(){
	cin>>n;
	if(n<=10)
		cout<<"2.50";
	else 
		printf("%.2f",2.5+(int(n)-10)*1.5);
}
