#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    //convert all the uppercase letters to lowercase in both strings
    for(int i = 0; i < s1.size(); i++)
        if(s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] -= 'A' - 'a';
    for(int i = 0; i < s2.size(); i++)
        if(s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] -= 'A' - 'a';
    

    //this 2-D array actually starts by 1
    int dp[s1.size() + 5][s2.size() + 5];
    int ans = 0;

    for(int i = 0; i <= s1.size(); i++)
    {
        for(int j = 0; j <= s2.size(); j++)
        {
            if(i == 0 || j == 0)
            {
                //dp[0][*] or dp[*][0] is just for simplicity
                dp[i][j] = 0;
            }else if(s1[i - 1] == s2[j - 1])
            {
                //state transformation
                dp[i][j] = dp[i - 1][j - 1] + 1;
                ans = max(ans,dp[i][j]);
            }else 
                dp[i][j] = 0;
        }
    }    
    cout << ans << '\n';
    printf("%.3lf",2.0 * ans / ( s1.size() + s2.size() ) );

    return 0;
}
