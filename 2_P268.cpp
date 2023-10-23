#include<bits/stdc++.h>
using namespace std;

char stk[10005];

char myPair(char c)
{
    if(c == ')') return '(';
    if(c == ']') return '[';
}

void solve()
{
    string s;
    cin >> s;
    int top = -1;
    for(int i = 0; i < s.size(); i++)
    {
        char t = s[i];
        if(t == '(' || t == '[')
        {
            stk[++top] = t;
        }
        else {
            if(stk[top] == myPair(t))
            {
                top--;
            }
            else {
                cout << "No\n";
                return;   
            }
        }
    }
    if(top == -1) cout << "Yes\n";
    else cout << "No\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}