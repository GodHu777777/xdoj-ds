#include<bits/stdc++.h>
using namespace std;

int flag1,flag2,flag3,flag4;
bool isUppercase(char c)
{
    if(c >= 'A' && c <= 'Z') return 1;
    return 0;
}

bool isLowercase(char c)
{
    if(c >= 'a' && c <= 'z') return 1;
    return 0;
}

bool isNumber(char c)
{
    if(c >= '0' && c <= '9') return 1;
    return 0;
}

bool isOther(char c)
{
    if(!isUppercase(c) && !isLowercase(c) && !isNumber(c)) return 1;
    return 0;
}

int main()
{
    string s;
    cin >> s;
    int count = 0;
    if(s.size() == 0) 
    {
        cout << "0";
        return 0;
    }
    if(s.size() != 0) count ++;
    if(s.size() > 8) count ++;
    for(int i = 0; i < s.size(); i++)
    {
        if(isUppercase(s[i])) flag1 = 1;
        if(isLowercase(s[i])) flag2 = 1;
        if(isNumber(s[i])) flag3 = 1;
        if(isOther(s[i])) flag4 = 1;
    }
    count += flag1 + flag2 + flag3 + flag4 - 1;
    cout << count;

    return 0;
}