#include<bits/stdc++.h>
using namespace std;

char myPair(char c)
{
    if(c == ')') return '(';
    if(c == ']') return '[';
    if(c == '}') return '{';
}

bool isLeftBrace(char c)
{
    if(c == '(') return 1;
    if(c == '[') return 1;
    if(c == '{') return 1;
    return 0;
}

bool isRightBrace(char c)
{
    if(c == ')') return 1;
    if(c == ']') return 1;
    if(c == '}') return 1;
    return 0;
}

void solve(string s)
{
    char stk[145];
    int top = -1;
    for(int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if(isLeftBrace(c))
            {
            stk[++top] = c;
        }   
        if(isRightBrace(c))
        {
            if(stk[top] == myPair(c))
            {
                top--;
            }
            else {
                cout << "Mismatch" << endl;
                return;
            }
        }
    }
    if(top == -1) cout << "Match" << endl;
    else cout << "Mismatch" << endl;
}

int main()
{
    string s;
    while(cin >> s)
    {
        if(s != "**0000**")
            solve(s);
    }

    return 0;
}