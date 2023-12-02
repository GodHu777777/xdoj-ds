#include<bits/stdc++.h>
using namespace std;

bool isBracket(char c)
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
    string rawS;
    string s;
    getline(cin, rawS);
    for(int i = 0; i < rawS.size(); i++)
    {
        if(isBracket(rawS[i])) s += rawS[i]; 
    }

    int stk[110];
    int top = -1;
    for(int i = 0; i < s.size(); i++)
    {
        char t = s[i];
        if(t == '(' || t == '[' || t == '{') stk[++top] = t;
        else {
            if(stk[top] == myPair(t)) top --;
            else {
                cout << "wrong";
                return 0;
                break;
            }
        }
    }
    if(top == -1) cout << "right";
    else cout << "wrong";
    

    
    return 0;
}