#include<bits/stdc++.h>
using namespace std;
int n,m,b[105][105];
char a[105][105];

int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(a[i][j]=='.'){      
                if(a[i+1][j]=='*')
                    b[i][j]++;
                if(a[i][j+1]=='*')
                    b[i][j]++;
                if(a[i+1][j+1]=='*')
                    b[i][j]++;
                if(a[i-1][j]=='*')
                    b[i][j]++; 
                if(a[i][j-1]=='*')
                    b[i][j]++; 
                if(a[i-1][j-1]=='*')
                    b[i][j]++; 
                if(a[i+1][j-1]=='*')
                    b[i][j]++; 
                if(a[i-1][j+1]=='*')
                    b[i][j]++;
            }
            else
                b[i][j]=-1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)
                if(b[i][j]!=-1)
                    cout<<b[i][j];
                else
                    cout<<'*';
            cout<<endl;
        }
}