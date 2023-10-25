#include<bits/stdc++.h>
using namespace std;

int a[1005][1005];
bool flag1[1005][1005];
bool flag2[1005][1005];
int main()
{
    int m,n;
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];

    for(int i = 1; i <= m; i++)
    {
        int minVal = 1e7,minIndex = 1;
        for(int j = 1; j <= n; j++)
        {
            if(a[i][j] < minVal)
            {
                minIndex = j;
                minVal = a[i][j];
            }
        }
        flag1[i][minIndex] = 1;
        for(int k = 1; k <= m; k++)
        {
            if(a[k][minIndex] > a[i][minIndex])
                flag1[i][minIndex] = 0;
        }
    }
    bool exist = 0;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(flag1[i][j])
            {
                cout << i << " " << j << " " << a[i][j] << endl;
                exist = 1;
            }
        }
    }
    if(!exist) cout << "NO";
    return 0;
}