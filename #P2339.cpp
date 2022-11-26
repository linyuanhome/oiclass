#include<bits/stdc++.h>
using namespace std;
int n,k;
int f(int x){
	if(x<=k||((x-k)%2))
        return 1;
	return f((x-k)/2)+f((x-k)/2+k);
}
int main(){
    cin>>n>>k;
    cout<<f(n);
}