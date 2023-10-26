_Oct 24th_

It's been a long time since using dp(dynamic programing),I think it's interesting generally but sometimes hard to find a better solution,the key is to find when the _state transformation_ will happen.

Today's problem(3_P257) is to find LCS(longest common substring),the state transformation happens just when the 2 letters in both strings equal,I think I've almost completed but I wa in some test case,I will solve it later.

BTW, mid-term exam is coming, I have little time on algorithm problems,(maybe only 1 hour per day).TT

_Oct 25th_

Be __CAUTIOUS__ about the _INDEX-OUT-OF-BOUND_ error while using array,e.g. using index [i + 1] before ensuring i won't be (n - 1).

Today I learnt KMP algorithm,whose key is the __next array__,which is like a suffix table.The index of next array usually starts by 1,(meanwhile index of string starts by 0,both things don't conflict)and always the value of ne[1] is always 0(we often use __ne__ to name the array since _next_ is used in C++).It's a little hard to understand so I will do more practice.

