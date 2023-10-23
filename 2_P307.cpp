#include<bits/stdc++.h>
using namespace std;
char stk[10005];
bool isBrace(char c)
{
    if(c == '(') return 1;
    if(c == ')') return 1;
    if(c == '[') return 1;
    if(c == ']') return 1;
    if(c == '{') return 1;
    if(c == '}') return 1;
    return 0;
}

char myPair(char c)
{
    if(c == ')') return '(';
    if(c == ']') return '[';
    if(c == '}') return '{';
}

int main()
{
    string s = "";
    char c;
    while(c = getchar())
    {
        if(c == EOF) break;
        if(isBrace(c)) s += c;
    }
    int top = -1;
    for(int i = 0; i < s.size(); i++)
    {
        char t = s[i];
        if(t == '(' || t == '[' || t == '{')
        {
            stk[++top] = t;
        } else if(t == ')' || t == ']' || t == '}')
        {
            if(stk[top] == myPair(t))
            {
                top--;
            }else 
            {
                cout << "wrong";
                return 0;
            }
        }
    }
    if(top == -1) cout << "right";
    else cout << "wrong";
    return 0;
}