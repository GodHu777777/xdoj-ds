#include<bits/stdc++.h>
using namespace std;

int a[100010];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i += 2) cout << a[i] << " ";
    for(int i = 2; i <= n; i += 2) cout << a[i] << " ";
    return 0;
}