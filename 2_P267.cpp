#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int a[1005];
int ans[1005];
int stk[1005];

void solve()
{
    for(int i = 0; i < n; i++) cin >> ans[i];
    int top = 1;
    int idx = 0;
    stk[top] = a[0];
    //intialize the stack(push the first element of array a into stack)
    //stack's index starts by 1
    //when top equals to 0,the stack is empty
    for(int i = 0; i < n; i++)
    {
        //do iteration until top element is target item
        while(stk[top] != ans[i])
        {
            stk[++top] = a[++idx];
            if(top > m || idx > n - 1)
            {
                cout << "NO" << endl;
                return;
            }
        }  
        if(top > m || idx > n - 1)
        {
            cout << "NO" << endl;
            return;
        }
        //now the top of stack is the current target,just pop it
        top--;
    }
    cout << "YES" << endl;
}

int main()
{ 
    cin >> m >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    while(k--)
    {
        solve();
    }
    return 0;
}