#include<bits/stdc++.h>
using namespace std;

int stk[105];

int stringToInt(string s)
{
    int res = 0;
    for(size_t i = 0; i < s.size(); i++)
    {
        res *= 10;
        res += s[i] - '0';
    }
    return res;
}

int main()
{
    string rawString;
    getline(cin, rawString);
    stack<string> stks;
    string str;
    for(size_t i = 0; i < rawString.size(); i++)
    {
        char t = rawString[i];
        if(t == ' ') 
        {
            stks.push(str);
            str = "";
            continue;
        }else if(i == rawString.size() - 1)
        {
            str += t;
            stks.push(str);
        }
        str += t;
    }

    vector<string> s;
    for(int i = 0; !stks.empty(); i++)
    {
        s.push_back(stks.top());
        stks.pop();
    }
    // for(auto t : s) cout << t << "&&" << endl;

    int top = -1;

    for(size_t i = 0; i < s.size(); i++)
    {
        if(s[i] == "+")
        {
            top --;
            stk[top] = stk[top] + stk[top + 1];
        }else if(s[i] == "-")
        {
            top --;
            stk[top] = stk[top + 1] - stk[top];
        }else if (s[i] == "*")
        {
            top --;
            stk[top] = stk[top] * stk[top + 1];
        }else if(s[i] == "/")
        {
            top --;
            // cout << stk[top + 1] << "%" << stk[top];
            stk[top] = stk[top + 1] / stk[top];
        }else {
            stk[++top] = stringToInt(s[i]);
            // cout << s[i] << "{{}}" <<stringToInt(s[i]) << '\n';

        }
    }
    cout << stk[top];
    return 0;
}