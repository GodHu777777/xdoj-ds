#include<bits/stdc++.h>
using namespace std;

int vis1[1010][1010];
int vis2[1010][1010];
int ans[1010][1010];

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> vis1[i][j];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            if(vis1[i][j] == 1)
                cin >> vis1[i][j];

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> vis2[i][j];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            if(vis2[i][j] == 1)
                cin >> vis2[i][j];
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            ans[i][j] = vis1[i][j] + vis2[i][j];
            if(ans[i][j] != 0) 
            {
                cout << "1 ";
            }else cout << "0 ";
        }                
        cout << endl;
    }
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            if(ans[i][j] != 0) 
                cout << ans[i][j] << " ";
    return 0;
}