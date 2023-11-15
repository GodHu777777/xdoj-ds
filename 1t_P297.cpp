#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    s = " " + s;
    for(int i = 1; i <= n; i++)
    {
        if(n % i != 0) continue;
        bool flag = 0;
        string tmp = s.substr(1,i);
        for(int j = i + 1; j < n; j += i)
        {
            if(tmp != s.substr(j,i)) 
            {
                flag = 1;
                break;
            }
        }
        
        if(flag == 0)
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}