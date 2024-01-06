#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
#define int long long
#define ll long long
#define cy cout << "YES" << "\n" 
#define cn cout << "YES" << "\n" 
#define cnl cout << "\n"
#define DEBUG_(t) cout << "###DEBUG:" << t << endl
#define mset(a) memset(a, 0, sizeof(a))
#define PII pair<int, int>
using namespace std;

bool adj[1010][1010];
bool vis[1010];
int n, m;
int cnt;

void DFS(int t)
{
    vis[t] = 1;
    for(int i = 1; i <= n; i++)
    {
        if(vis[i] == 1) continue;
        if(adj[t][i] == 1) DFS(i);
    }
}

void solve()
{
    mset(vis);
    for(int i = 1; i <= n; i++)
    {
        if(vis[i] == 1) continue;
        cnt ++;
        DFS(i);
    }   
}

signed main()	
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        adj[a][b] = adj[b][a] = 1;
    }
    solve();
    cout << cnt - 1;
    return 0;
}