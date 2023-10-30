#include<bits/stdc++.h>
using namespace std;

struct Node
{
    string thisAddr;
    string nextAddr;
    int val;
    bool alive = 1;
};

Node Nodes[110],sortedNodes[110];

bool flag[10010];

int main()
{
    string startAddr;
    int n;
    cin >> startAddr >> n;
    for(int i = 0; i < n; i++)
        cin >> Nodes[i].thisAddr >> Nodes[i].val >> Nodes[i].nextAddr;

    string curAddr = startAddr;
    int cnt = 0;
    while(curAddr != "-1")
    {
        for(int i = 0; i < n; i++)
        {
            if(Nodes[i].thisAddr == curAddr)
            {
                curAddr = Nodes[i].nextAddr;
                sortedNodes[cnt] = Nodes[i];
                break;
            }
        }
        cnt ++;
    }
    int del = 0;
    for(int i = 0; i < n; i++)
    {
        if(flag[abs(sortedNodes[i].val)] == 1) 
            sortedNodes[i].alive = 0,del ++;
        else flag[abs(sortedNodes[i].val)] = 1;
    }
    cout << n - del << endl;

    for(int i = 0; i < n; i++)
    {
        cout << sortedNodes[i].thisAddr << " " << sortedNodes[i].val << " ";
        while(i + 1 != n && sortedNodes[i + 1].alive == 0)
        {
            i++;
        }
        cout << sortedNodes[i].nextAddr;
        cout << endl;
    }
    return 0;
}