#include<bits/stdc++.h>
using namespace std;
char st[1005];
int a;
int get(int x){
	int r=0;
	while(st[x]>='0'&&st[x]<='9'){
		r=r*10+st[x]-48;
		x++;
	}
	return r;
}
int main(){
	scanf("%s",st+1);
	st[0]='+';
	for(int i=0;i<strlen(st);i++){
		if(st[i]=='-')
            a-=get(i+1);
		if(st[i]=='+')
            a+=get(i+1);
	}
	cout<<a;
}
