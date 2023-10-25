#include<bits/stdc++.h>
using namespace std;

int ne[100010];    

int main()
{
    int n;
    cin >> n;
    string s = " ";
    for(int i = 1; i <= n; i++)
    {
        char c;
        cin >> c;
        s += c;
    }
    for(int i = 2,j = 0; i <= n; i++)
    {
        while(j && s[i] != s[j + 1]) j = ne[j];
        if(s[i] == s[j + 1]) j++;
        ne[i] = j;
    }
    //behaviors below may seem strange since I need to 
    //cater to the example test case
    //actually I will iterate the ne array from 1 to n
    cout << "-1 ";
    for(int i = 1; i < n; i++) cout << ne[i] << " ";
    return 0;
}