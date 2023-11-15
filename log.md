# Oct 24th

It's been a long time since using dp(dynamic programing),I think it's interesting generally but sometimes hard to find a better solution,the key is to find when the __state transformation__ will happen.

Today's problem(3_P257) is to find LCS(longest common substring),the state transformation happens just when the 2 letters in both strings equal,I think I've almost completed but I wa in some test case,I will solve it later.

BTW, mid-term exam is coming, I have little time on algorithm problems,(maybe only 1 hour per day).TT

# Oct 25th

Be __CAUTIOUS__ about the __INDEX-OUT-OF-BOUND__ error while using array,e.g. using index $[i + 1]$ before ensuring i won't be $(n - 1)$.

Today I learnt KMP algorithm,whose key is the __next array__,which is like a suffix table.The index of next array usually starts by 1,(meanwhile index of string starts by 0,both things don't conflict)and always the value of ne[1] is always 0(we often use __ne__ to name the array since _next_ is used in C++).It's a little hard to understand so I will do more practice.

# Oct 26th

If the variable's range is relatively small,we can use bucket to store the number of variable(e.g. 3_P164) and do sorting job.

Today I learnt how to manage a git repository across 2 devices,just push and pull regularly like before a break you do a push and before start do a pull.

# Oct 27th

[priority_queue](https://en.cppreference.com/w/cpp/container/priority_queue#:~:text=A%20priority%20queueis%20a%20container%20adaptor%20that%20provides,the%20smallest%20element%20to%20appear%20as%20the%20top%28%29.) is useful.

# Oct 28th

[string](https://cplusplus.com/reference/string/string/) is undoubtedly powerful,it can make comparison of 2 string lexicographically(~~字典序地~~).
e.g.

    ```C++
    bool cmp(string s1,string s2)
    {
        return s1 < s2;
    }
    ```

# Oct 29th

Today I learnt using [deque](https://en.cppreference.com/w/cpp/container/deque) to solve a problem from codeforces([P1889A](https://codeforces.com/contest/1889/problem/A)),I think its algorithm is basically based on **RECURSION**,like split up the whole problem into pieces and then solve it step by step easier.

# Oct 30th

Struct without pointer member can be assgined directly by $=$ operator.(1_P258.cpp line 33)

# Nov 13th

OK,I'm back.Sadly in recent days I still don't have enough cause I need to lay a foundation about deep learning and computer vision thing TT,this is kind of tricky for me such a beginner.

Today I finish 2 test1 problems and name the files as __1t_P***.cpp__.It will ends on Nov$^{19th}$,time is tough.

# Nov 14th

test 1 is done.bucket sorting is useful.