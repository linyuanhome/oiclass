#include<bits/stdc++.h>
using namespace std;
bool prime[10000005];
int n,b,e;
void ai(){
	for(int i=0;i<=10000000; i++)
        prime[i]=true;
	for (int i=2;i<=10000000;i++)
		if (prime[i])
			for (int j=i+i;j<=10000000;j+=i)
				prime[j]=false;
}
int main(){
    ai();
    cin>>n;
    if(prime[n]){
        cout<<0;
        return 0;
    }
    b=n-1;
    while(!prime[b])
        b--;
    e=n+1;
    while(!prime[e])
        e++;
    cout<<e-b;
}