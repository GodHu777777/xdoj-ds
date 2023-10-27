#include<bits/stdc++.h>
using namespace std;

bool isNumber(char c)
{
    if(c >= '0' && c <= '9') return 1;
    return 0;
}

//although I create the stack array of size 100
//the top will only vary from -1 to 0
char stk[100];

//actually this problem should be solved by queue
//since it is more like FIFO(first in first out)
//I will make another solution with queue

int main()
{
    string s;
    cin >> s;
    int top = -1;
    int curCnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        
        if(isNumber(s[i])) 
        {
            curCnt *= 10;
            curCnt += s[i] - '0';
        }
        //if s[i] isn't char number,just push it into stack
        else {
            //if current count exists,we should pop the top
            //of stack curCnt times,and set curCnt back to 0
            if(curCnt != 0) 
            {
                while(curCnt > 0)
                {
                    cout << stk[top];
                    curCnt --;
                }
                top --;
            }
            //now curCnt is 0 but stack is not empty
            //so pop the top only one time 
            else if(top != -1) 
            {
                cout << stk[top];
                top --;
            }
            //push s[i] into stack
            stk[++top] = s[i];
        }
    }
    bool flag = 0;
    while(curCnt > 0)
    {
        cout << stk[top];
        curCnt --;
        flag = 1;
    } 
    if(flag == 1) top --;
    if(top != -1) cout << stk[top];
    return 0;
}