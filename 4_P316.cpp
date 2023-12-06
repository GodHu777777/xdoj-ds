#include<bits/stdc++.h>
using namespace std;


long long stk1[100010], stk2[100010];

void solve(int m, int n)
{
    if(m == n) 
    {
        cout << m << '\n';
        return;
    }
    int top1 = -1, top2 = -1;
    while(m != 0)
    {
        stk1[++top1] = m;
        m /= 2;
    }
    while(n != 0)
    {
        stk2[++top2] = n;
        n /= 2;
    }
    while(stk1[top1] == stk2[top2])
    {
        top1--, top2--;
    }
    cout << stk1[top1 + 1] << '\n';
    memset(stk1, 0, sizeof(stk1));
    memset(stk2, 0, sizeof(stk2));
}

int main()
{
    int m,n;
    cin >> m >> n;
    while(m != 0 && n != 0)
    {
        solve(m, n);
        cin >> m >> n;
    }
    return 0;
}