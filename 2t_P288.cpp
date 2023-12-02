#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e8 + 10;
int ne[MAXN];
char s[MAXN];
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> s[i];

    for(int i = 2, j = 0; i <= n; i++)
    {
        while(s[i] != s[j + 1] && j) j = ne[j];
        if(s[i] == s[j + 1]) j ++;
        ne[i] = j;
    }

    for(int i = 1; i <= n; i++) cout << ne[i] << " ";
    return 0;
}
