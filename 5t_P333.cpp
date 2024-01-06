#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
#define int long long
#define ll long long
#define endl "\n"
#define cy cout << "YES" << "\n" 
#define cn cout << "NO" << "\n" 
#define cnl cout << "\n"
#define DEBUG_(t) cout << "###DEBUG:" << t << endl
#define mset(a) memset(a, 0, sizeof(a))
#define PII pair<int, int>
using namespace std;
const int MAXN = 100000 + 5;

/*题目： 找位置
问题描述
对给定的一个字符串，找出有重复的字符，并给出其位置。
输入格式
输入包括一个由字母和数字组成的字符串，其长度不超过100。
输出格式
可能有多组测试数据，对于每组数据，
按照样例输出的格式将字符出现的位置标出。

1、下标从0开始。
2、相同的字母在一行表示出其出现过的位置。
样例输入
abcaaAB12ab12
样例输出
a:0,a:3,a:4,a:9
b:1,b:10
1:7,1:11
2:8,2:12
样例说明
给定字符串中重复的字母有a,b,1,2，依次输出上述每个字母在字符串中的全部位置。
*/

vector<int> q[110];
bool vis[10010];
int ans[110];

signed main()	
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    cin >> s;

    int n = s.size();

    for(int i = 0; i < n; i++)
    {
        char ch = s[i];
        if(vis[ch]) continue;
        else vis[ch] = 1;

        int cnt = 0;
        // ans index from 1
        ans[++cnt] = i;
        
        for(int j = i + 1; j < n; j++)
        {
            if(s[j] == ch)
            {
                ans[++cnt] = j;
            }
        }
        if(cnt >= 2) 
        {
            cout << ch << ":" << i;
            for(int i = 2; i <= cnt; i++)
            {
                cout << "," << ch << ":" << ans[i];
            }
            cnl;
        }
    }
    return 0;
}