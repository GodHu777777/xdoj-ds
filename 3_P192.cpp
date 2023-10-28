#include<bits/stdc++.h>
using namespace std;

int a[5];
stack<int> stk;
int main()
{
    string s;
    cin >> s;
    for(int i = 0,j = 0; j < 5; i += 2,j ++)
    {
        stk.push(s[i] - '0');
    }
    while(!stk.empty())
    {
        cout << stk.top() << " ";
        stk.pop();
    }

    return 0;
}