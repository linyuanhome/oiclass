#include<bits/stdc++.h>
using namespace std;
char mod[12]="0123456789X";
string s;
int k=1,sum;
int main(){
    cin>>s;
    for(int i=0;i<12;i++)
        if(s[i]!='-'){
            sum+=(s[i]-'0')*k;
            k++;
        }
    if(mod[sum%11]==s[12])  
        cout<<"Right";
    else {   
        s[12]=mod[sum%11];
        cout<<s;
    }
}