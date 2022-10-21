#include<bits/stdc++.h>
using namespace std;
string s;
long long a[105],num=2,sum;
int main(){
	cin>>s;
    if(s.size()>100){
        cout<<"too long!";
        return 0;
    }
	for(long long i=s.size()-1;i>=0;i--){
		a[i]=num-1;
		num*=2;
	}
	for(long long i=s.size()-1;i>=0;i--){
		sum+=(s[i]-'0')*a[i];
		if(sum>2147483647){
			cout<<"too long!";
			return 0;
		}
	}
	cout<<sum;
}