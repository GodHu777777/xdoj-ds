#include<bits/stdc++.h>
using namespace std;

int a[100010];
bool alive[100010];
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) alive[i] = 1;
    int code = 2;
    int aliveN = n;
    while(aliveN > 3)
    {
        int pos = 0;
        for(int i = 1; i <= n; i++)
        {
            if(!alive[i]) continue;
            pos ++;
            if(pos % code == 0) {
                alive[i] = 0;
                aliveN--;
            }
        }

        if(code == 2) code = 3;
        else code = 2;
    }
    for(int i = 1; i <= n; i++)
    {
        if(alive[i]) cout << i << " ";
    }
    return 0;
}