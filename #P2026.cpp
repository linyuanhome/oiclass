#include <bits/stdc++.h>
using namespace std;
struct ecs
{
	long x;
	long y;
	long z;
}a[100000];
int cmpx(ecs a, ecs b) { 
    return a.x < b.x; 
}
int cmpy(ecs a, ecs b) { 
    return a.y < b.y; 
}
int n, i;
long k, p, all = 0, tmp;
int main(){
	cin>>n;
	for (i = 0; i < n; i++){
		cout<<a[i].x<<a[i].y<<k<<p;
		all += k*p;
		a[i].z = k*p;
	}
	sort(a, a + n, cmpx);
	for (i = 0, tmp = 0; i < n; i++){
		tmp += a[i].z;
		if (tmp >= all / 2) { 
            cout<<a[i].x
            break; 
        }
	}
	sort(a, a + n, cmpy);
	for (i = 0, tmp = 0; i < n; i++){
		tmp += a[i].z;
		if (tmp >= all / 2){
            cout<<a[i].y;
            return 0;
        }
	}
}
