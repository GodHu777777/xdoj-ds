_Oct 24th_

It's been a long time since using dp(dynamic programing),I think it's interesting generally but sometimes hard to find a better solution,the key is to find when the _state transformation_ will happen.

Today's problem(3_P257) is to find LCS(longest common substring),the state transformation happens just when the 2 letters in both strings equal,I think I've almost completed but I wa in some test case,I will solve it later.

BTW, mid-term exam is coming, I have little time on algorithm problems,(maybe only 1 hour per day).TT

_Oct 25th_

Be __CAUTIOUS__ about the _INDEX-OUT-OF-BOUND_ error while using array,e.g. using index [i + 1] before ensuring i won't be (n - 1).

Today I learnt KMP algorithm,whose key is the __next array__,which is like a suffix table.The index of next array usually starts by 1,(meanwhile index of string starts by 0,both things don't conflict)and always the value of ne[1] is always 0(we often use __ne__ to name the array since _next_ is used in C++).It's a little hard to understand so I will do more practice.

_Oct 26th_

If the variable's range is relatively small,we can use bucket to store the number of variable(e.g. 3_P164) and do sorting job.

Today I learnt how to manage a git repository across 2 devices,just push and pull regularly like before a break you do a push and before start do a pull.

_Oct 27th_

[priority_queue](https://en.cppreference.com/w/cpp/container/priority_queue#:~:text=A%20priority%20queueis%20a%20container%20adaptor%20that%20provides,the%20smallest%20element%20to%20appear%20as%20the%20top%28%29.) is useful.

_Oct 28th_
[string](https://cplusplus.com/reference/string/string/) is undoubtedly powerful,it can make comparison of 2 string lexicographically(~~字典序地~~).
e.g.

    ```
    bool cmp(string s1,string s2)
    {
        return s1 < s2;
    }
    ```
