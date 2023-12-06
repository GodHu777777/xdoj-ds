#include<bits/stdc++.h>
using namespace std;

int a[1010];

int main()
{
    int n;
    cin >> n;

    int t;
    while(n != 0)
    {
        for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
        cin >> t;

        if(pow(2, t - 1) > n)
        {
            puts("EMPTY");
        }else 
        {
            for(int i = (int)pow(2, t - 1); i <= min((int)pow(2, t) - 1, n); i++) printf("%d ", a[i]);
            puts("");
        }
        
        cin >> n;

    }

    return 0;
}