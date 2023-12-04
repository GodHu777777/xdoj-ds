#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;
    int n = s.size() - 1;
    s = " " + s;
    s[s.size() - 1] = '@';
    for(int i = 0; i < n; i++) s += '@';

    int cnt = 0;

    for(int i = 1; i <= n; i++)
    {
        if(s[i] == '@') continue;
        if(s[i*2] == '@' && s[i*2 + 1]== '@')
        {
            cout << s[i] << " ";
            cnt ++;
        }
    }
    puts("");
    cout << cnt;
    return 0;
}