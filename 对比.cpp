#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
int n, m,f[310][310];
int a[310][310];
int ans[310];
int main()
{
    int n;
    scanf("%d",&n);

    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            scanf("%1d",&a[i][j]);
        }
    }
    
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            if(a[i][j] == 1)
                f[i][j] = min(f[i - 1][j - 1],min(f[i][j - 1],f[i - 1][j])) + 1;
            for(int k = 2;k <= f[i][j];k++)
                ans[k]++;
        }
    }
    for(int i = 1;i <= n;i++)
        if(ans[i])
        {
            printf("%d %d\n",i,ans[i]);
        }
    return 0;
}

