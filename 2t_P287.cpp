#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1010;

bool isMaAn[MAXN][MAXN];
int a[MAXN][MAXN];

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
        

    for(int i = 0; i < m; i++)
    {
        int minn = 1e7;
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] < minn) minn = a[i][j];
        }
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] == minn) isMaAn[i][j] = 1;
        }
    }

    for(int j = 0; j < n; j++)
    {
        int maxm = 0;
        for(int i = 0; i < m; i++)
        {
            if(a[i][j] > maxm) maxm = a[i][j];
        }
        for(int i = 0; i < m; i++)
        {
            if(isMaAn[i][j] && a[i][j] != maxm) isMaAn[i][j] = 0;
        }
    }

    bool isEmpty = 1;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(isMaAn[i][j]) 
            {    
                cout << i + 1 << " " << j + 1 << " " << a[i][j] << endl;
                isEmpty = 0;
            }
        }
    }
    if(isEmpty) cout << "NO" << endl;
    return 0;
}