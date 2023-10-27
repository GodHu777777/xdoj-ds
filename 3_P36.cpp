#include<bits/stdc++.h>
using namespace std;

int a[25][25];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    priority_queue<int,vector<int> > pq;
    for(int i = 1; i <= n; i++)
    {
        int sum = 0;
        for(int j = 1; j <= n; j++)
            sum += a[i][j];
        pq.push(sum);
    }
    for(int j = 1; j <= n; j++)
    {
        int sum = 0;
        for(int i = 1; i <= n; i++)
            sum += a[i][j];
        pq.push(sum);
    }
    int sum = 0;
    for(int i = 1; i <= n; i++)
        sum += a[i][i];
    pq.push(sum);
    sum = 0;
    for(int i = 1; i <= n; i++)
        sum += a[i][n + 1 - i];
    pq.push(sum);
    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}