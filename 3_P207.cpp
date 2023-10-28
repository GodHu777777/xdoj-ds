#include<bits/stdc++.h>
using namespace std;

bool cmp(string s1,string s2)
{
    return s1 < s2;
}

int main()
{
    int n;
    cin >> n;
    string s[n + 5];
    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    sort(s, s + n, cmp);
    for(int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
    return 0;
}