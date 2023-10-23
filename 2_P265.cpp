#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int> > pq;
    int n;
    cin >> n;
    while(n--)
    {
        int t;
        cin >> t;
        pq.push(t);
    }
    while(!pq.empty())
    {
        n--;
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}