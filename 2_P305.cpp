#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int stk[15];
    int ans[15];
    for(int i = 0; i < n; i++) cin >> ans[i];
    int top = 1;
    stk[top] = 1;
    int idx = 1;
    for(int i = 0; i < n; i++)
    {
        while(ans[i] != stk[top])
        {
            stk[++top] = ++idx;
            if(top > n)
            {
                cout << "no\n";
                goto FLAG;
            }
        }
        top--;
    }
    cout << "yes\n";
    FLAG:
    return 0;
}