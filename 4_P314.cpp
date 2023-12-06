#include<bits/stdc++.h>
using namespace std;

vector<int> a;

void search(int m, int n)
{
    if(m * 2 <= n) search(m * 2, n);
    if(m * 2 + 1 <= n) search(m * 2 + 1, n);
    a.push_back(m);
}

int main()
{
    int m, n;
    cin >> m >> n;    
    while(m != 0 && n != 0)
    {
        search(m, n);
        cout << a.size() << '\n';
        a.erase(a.begin(),a.end());
        cin >> m >> n;
    }

    
    return 0;
}