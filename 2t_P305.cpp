#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 10;

int ans[MAXN];
int stk[MAXN];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }
    int t = 1;
    int top = -1;
    for(int i = 0; i < n; i++)
    {
        while(stk[top] != ans[i]) 
        {
            if(t > n) 
            {
                puts("no");
                return 0;
            }
            stk[++top] = t;
            t++;
        }
        if(stk[top] == ans[i])
        {
            top --;
        }
    }
    puts("yes");
    return 0;
}