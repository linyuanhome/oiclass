#include <bits/stdc++.h>
using namespace std;
string a,b;
int p,d,r;
int main()
{ 
    cin>>a;
    getline(cin,b);
    getline(cin,b);
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    a=' '+a+' ';
    b=' '+b+' ';
    p=b.find(a);
    if (p!=-1){
        d=p;
        while(p != -1){
            r++;
            p=b.find(a,p+1);
        }
    }
	else{
        cout<<-1;
        return 0;
    }
    cout<<r<<" "<<d;
}
