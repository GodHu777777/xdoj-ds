#include<bits/stdc++.h>
using namespace std;

bool isAlphabet[105];
int buc[1000];
int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] += 'A' - 'a';
            isAlphabet[i] = 1;
        }
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            isAlphabet[i] = 1;
            buc[s[i]] ++;
        }
    }
    for(int i = 0; i < s.size(); i++)
    {
        if(isAlphabet[i])
        {
            for(int j = 'A'; j <= 'Z'; j++)
            {
                if(buc[j] > 0) 
                {
                    cout << char(j);
                    buc[j] --;
                    break;
                }
            }
        }else cout << s[i];
    }
    return 0;
}