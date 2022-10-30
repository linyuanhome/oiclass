
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+6;
const int INF = 0x3cccf;
int r,n;
int a[N],b[N],c[N],d[N],e[N],f[N];
bool cmp(int x,int y){
	return x > y;
}
signed main(){
	cin >> r;
	while (r--){
		bool flag1 = 1,flag2 = 1,flag3 = 1,flag4 = 1;
		cin >> n;
		for (int i = 1;i<=n;i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a+1,a+n+1);
		sort(b+1,b+n+1,cmp);
		for (int i = 1;i<=n;i++){
			if (i % 2 == 1){
				c[i] = a[(i + 1) / 2];
			}
			else{
				c[i] = b[((n / 2) - i / 2) + 1];
			}

		}

		for (int i = 1;i<=n;i++){
			if (i % 2 == 0){
				d[i] = a[((n / 2) - i / 2) + 1];
			}
			else{
				d[i] = b[(i + 1) / 2];
			}

		}
		for (int i = 1;i<=n;i++){
			if (i % 2 == 1){
				e[i] = a[(i + 1) / 2];
			}
			else{
				e[i] = b[((n / 2) - i / 2) + 1];
			s}

		}

		for (int i = 1;i<=n;i++){
			if (i % 2 == 0){
				f[i] = a[i / 2];
			}
			else{
				f[i] = b[((n / 2) - i / 2)];
			}

		}
		for (int i = 1;i<=n-2;i++){
			if (!(c[i + 1] > c[i] and c[i + 1] > c[i + 2]) and !(c[i + 1] < c[i + 2] and c[i + 1] < c[i])) flag1 = 0;
		}
		for (int i = 1;i<=n-2;i++){
			if (!(d[i + 1] > d[i] and d[i + 1] > d[i + 2]) and !(d[i + 1] < d[i] and d[i + 1] < d[i + 2])) flag2 = 0;
		}
		for (int i = 1;i<=n-2;i++){
			if (!(e[i + 1] > e[i] and e[i + 1] > e[i + 2]) and !(e[i + 1] < e[i + 2] and e[i + 1] < e[i])) flag3 = 0;
		}
		for (int i = 1;i<=n-2;i++){
			if (!(f[i + 1] > f[i] and f[i + 1] > f[i + 2]) and !(f[i + 1] < f[i + 2] and f[i + 1] < f[i])) flag4 = 0;
		}
		if (flag1 or flag2 or flag3 or flag4) cout << "Yes" << endl;
		else cout << "No" << endl;
		flag1 = 1,flag2 = 1,flag3 = 1,flag4 = 1;
		for (int i = 1;i<=n;i++){
			a[i] = b[i] = c[i] = d[i] = e[i] = f[i] = 0;
		}
	}
    return 0;
}
