#include <bits/stdc++.h>
using namespace std;
int a[9][9], n;
bool f()
{
    bool xf[9];
    for (int m = 0; m < 9; m++)
        xf[m] = false;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
            if (xf[a[i][j] - 1] == true)
                return false;
            else
                xf[a[i][j] - 1] = true;
        for (int m = 0; m < 9; m++)
            xf[m] = false;
        for (int j = 0; j < 9; j++)
            if (xf[a[j][i] - 1] == true)
                return false;
            else
                xf[a[j][i] - 1] = true;
    }
    for (int m = 0; m < 9; m++)
        xf[m] = false;
    for (int i = 0; i <= 6; i += 3)
        for (int j = 0; j <= 6; j += 3)
            for (int x = 0; x < 3; x++)
                for (int y = 0; y < 3; y++)
                    if (xf[a[i + x][j + y] - 1] == true)
                        return false;
                    else
                        xf[a[i + x][j + y] - 1] = true;
    return true;
}
int main()
{
    cin >> n;
    while (n--)
    {
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                cin >> a[i][j];
        if (f())
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }
    return 0;
}