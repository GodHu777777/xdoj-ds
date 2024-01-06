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

/*题目：分组统计
问题描述
先输入一组数，然后输入其分组，按照分组统计出现次数并输出，参见样例。
输入格式
输入第一行表示样例数m，对于每个样例，第一行为数的个数n，接下来两行分别有n个数，第一行有n个数，第二行的n个数分别对应上一行每个数的分组，n不超过100。数和分组号的值都不超过10000。
输出格式
按顺序输出各个样例的结果。输出格式参见样例，按组号从小到大输出，组内数字也按编号从小到大输出。
样例输入
1
7
3 2 3 8 8 2 3
1 2 3 2 1 3 1
样例输出
1={2=0,3=2,8=1}
2={2=1,3=0,8=1}
3={2=1,3=1,8=0}
样例说明

*/

int a[10010];
int gpNumber[10010];

bool vis[10010];
bool visGp[10010];
int ans[10010];


void solve()
{
    mset(a);
    mset(gpNumber);

    vector<int> nums;
    vector<int> gps;


    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(!vis[a[i]])
        {
            nums.push_back(a[i]);
        }
        vis[a[i]] = 1;
    }
    
    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++)
    {
        cin >> gpNumber[i];
        if(!visGp[gpNumber[i]]) 
        {
            gps.push_back(gpNumber[i]);
            visGp[gpNumber[i]] = 1;
        }
    }

    sort(gps.begin(), gps.end());

    for(int p = 0; p < gps.size(); p++)
    {
        int i = gps[p];
        mset(ans);
        for(int j = 0; j < n; j++)
        {
            if(gpNumber[j] == i)
            {
                ans[a[j]] ++;
            }
        }
        cout << i << "={";
        for(int j = 0; j < nums.size(); j++)
        {
            cout << nums[j] << "=" << ans[nums[j]];
            if(j != nums.size() - 1) cout << ",";
        }
        cout << "}\n";
    }
}


signed main()	
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t --) solve();
    return 0;
}