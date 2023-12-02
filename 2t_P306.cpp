#include<bits/stdc++.h>
using namespace std;

int stk[1005];

int main()
{
    string s;
    getline(cin,s);
    int top = -1;
    for(size_t i = 0; i < s.size(); i++)
    {
        if(s[i] >= '0' && s[i] <= '9') stk[++top] = s[i] - '0';
        else if(s[i] == '+')
            {
                top--;
                stk[top] = stk[top] + stk[top + 1];
            }
        else if(s[i] == '-')
            {
                top--;
                stk[top] = stk[top] - stk[top + 1];
            }
        else if(s[i] == '*')
            {
                top--;
                stk[top] = stk[top] * stk[top + 1];
            }
        else if(s[i] == '/')
            {
                top--;
                stk[top] = stk[top] / stk[top + 1];
            }
    }
    cout << stk[top];
    return 0;
}