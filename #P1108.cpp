#include<bits/stdc++.h>
using namespace std;
struct tx{
    int yw,sx,yy,zf,xh;
    void input(int x){
        cin>>yw>>sx>>yy;
        zf=yw+sx+yy;
        xh=x;
    }
}a[305];
bool cmp(tx a,tx b){
    if(a.zf!=b.zf)
        return a.zf>b.zf;
    if(a.yw!=b.yw)
        return a.yw>b.yw;
    return a.xh<b.xh;
}
int n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        a[i].input(i+1);
    sort(a,a+n,cmp);
    for(int i=0;i<5;i++)
        cout<<a[i].xh<<' '<<a[i].zf<<endl;
}