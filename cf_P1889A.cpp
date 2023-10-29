#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(n % 2 == 1) 
    {
        cout << "-1" << endl;
        return;
    }
    int cnt0 = 0, cnt1 = 0;
    for(int i = 0; i < n; i++)
    {
        cnt0 += s[i] == '0';
        cnt1 += s[i] == '1';
    }
    if(cnt0 != cnt1)
    {
        cout << "-1" << endl;
        return;
    }

    deque<int> q;
    vector<int> z;
    for(int i = 0; i < n; i++)
        q.push_back(s[i]);
    int d = 0;
    while(!q.empty())
    {
        if(q.front() == q.back())
        {
            if(q.front() == '0')
            {
                q.push_back('0');
                q.push_back('1');
                z.push_back(n - d);
            }else 
            {
                q.push_front('1');
                q.push_front('0');
                z.push_back(0 + d);
            }
        n += 2;
        }
        while(!q.empty() && q.front() != q.back())
        {
            q.pop_back();
            q.pop_front();
            d ++;
        }
    }
    cout << z.size() << endl;
    for(int i = 0; i < z.size(); i++)
    {
        cout << z[i];
        if(i + 1 == z.size()) cout << endl;
        else cout << " ";
    }
}


int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}