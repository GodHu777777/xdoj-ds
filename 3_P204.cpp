#include<bits/stdc++.h>
using namespace std;
map<string,int> myMap;

int main()
{
    string rawString;
    getline(cin,rawString);
    string s = "";
    int maxNumber = 0;
    string maxString = "";
    for(int i = 0; i < rawString.size(); i++)
    {
        char t = rawString[i];
        if(t == ' ') {
            s = "";
            continue;
        }
        s += t;
        if(i == rawString.size() - 1 || rawString[i + 1] == ' ')
        {
            myMap[s] ++;
            if(myMap[s] > maxNumber)
            {
                maxString = s;
                maxNumber = myMap[s];
            }
        }
    }
    cout << maxString << " " << maxNumber;
    return 0;
}