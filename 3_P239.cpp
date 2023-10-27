#include<bits/stdc++.h>
using namespace std;

int dp[15][15];
int main()
{
    int n;
    cin >> n;
    dp[1][1] = 1;
    cout << 1 << endl;
    for(int i = 2; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}