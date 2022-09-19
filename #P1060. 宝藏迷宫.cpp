#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
int a[55][55];
int v[55][55];
enum fangxiang{YS,ZX};
int x,y;
fangxiang fx = YS;
void updatev()
{
	v[x-1][y] = max(v[x][y]+a[x-1][y],v[x-1][y]);
	v[x][y-1] = max(v[x][y]+a[x][y-1],v[x][y-1]);
}
bool processNext(){
	//如果上面或者左边还有节点，就更新值，如果没有，就返回假
	updatev();
	if((x-1)<0 || (y+1)>n) return false;
	else {
		x--;
		y++;
	}
	
	return true;
	
}
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		//TODO
		for(int j=1;j<=n;j++){
			//TODO
			cin>>a[i][j];
		}
	}
	//bool flag = true;
	v[m][n]=a[m][n];
	for(int i=n;i>=1;i--){
		//TODO
		x=m;
		y=i;
		bool flag = true;
		while(flag){
			//TODO
			flag = processNext();
		}
	}
	for(int i=m-1;i>=1;i--){
		//TODO
		x=i;
		y=1;
		bool flag = true;
		while(flag){
			//TODO
			flag = processNext();
		}
	}
	
	cout<<v[1][1];
	
	return 0;
}
