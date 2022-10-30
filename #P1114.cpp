#include<bits/stdc++.h>
using namespace std;
#define NMAX 100000
struct C 
{
	int x1, x2;
	int in;
};
C c[NMAX];
int ans,maxv=-1,n;
bool cmp1(C a, C b) {
	return a.x1 < b.x1;
}
bool cmp2(C a, C b) {
	return a.x2 < b.x2;
}
int main() 
{
	cin>>n;
	for (int i = 0; i < n; i++) 
	    cin>>c[i].x1>>c[i].x2;
	sort(c, c + n, cmp2);
	for (int i = 0; i < n; i++) 
		c[i].in = i;
	sort(c, c + n, cmp1);
	for (int i = 0; i < n; i++) {
		if (c[i].in == i && maxv == i-1) 
			ans++;
		maxv = max(maxv, c[i].in);
	}
	cout<<ans;
}
