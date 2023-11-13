#include<bits/stdc++.h>
using namespace std;



void solve()
{
    int n;
    cin >> n;
    int a[n + 5];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int t = 2; pow(2,t - 1) <= n; t++)
    {
        int end = fmin(pow(2,t),n);
        for(int i = pow(2,t - 1) + 1; i < end; i++)
        {
            for(int j = i + 1; j <= end; j++)
            {
                if(a[i] > a[j]) 
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
    return;
}

int main()
{
    int t;
    cin >> t;
    while(t --) solve();
    return 0;
}