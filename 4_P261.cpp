#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    priority_queue<int, vector<int>, greater<int> > pq;

    for(int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        pq.push(t);
    }

    int WPL = 0;

    for(int i = 1; i < n; i++)
    {
        int a, b;
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();
        pq.push(a + b);
        WPL += a + b;
    }

    cout << WPL << '\n';
    return 0;
}