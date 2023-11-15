#include<bits/stdc++.h>
using namespace std;

int buc[10010];

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = 0; i < n + m; i++)
    {
        int t;
        cin >> t;
        buc[t] ++;
    }
    for(int i = 1; i <= 10000; i++)
    {
        if(buc[i]) cout << i << " ";
    }
    return 0;
}