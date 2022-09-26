#include<bits/stdc++.h>
using namespace std;
int second,minute,hour;
int main(){
	cin>>second;
	minute=second/60;
	second%=60;
	hour=minute/60;
	minute%=60;
	cout<<hour<<':'<<minute<<':'<<second;
	return 0;
}
