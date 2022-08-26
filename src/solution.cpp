#include<cmath>
#include"../inc/solution.hpp"


// idea is to subtract from n increasingly large perfect squares, until finding another perf square
int Solution::numSquares(int n)
{
    int count{0}, tmp{n}, sub{1};  // counts perf squares / stores original input / value to be squared and subtracted, respectively
    while(true)
    {
        if(isPerfectSquare(n)){ return ++count; }  // found a perf square
        n -= pow(sub++,2);  // subtract next largest perfect square from n

        // have subtracted too large of a perfect square from n. subtract the previous largest perf square
        // from input tmp, reset n to tmp, and then repeat process for this smaller value (incrementing count)
        if(n < 0){ tmp -= pow(sub-2,2); n = tmp; sub = 1; ++count; continue; }

        if(n == 1){ return ++count; }  // 1 is the smallest perfect square we can use
        if(isPerfectSquare(n)){ return count+2; }  // subtraction result is a perf sq (+1), as is the subtracted value (+1)

        n = tmp;  // n is a non-perf square > 1, reset n and try subtracting a larger perfect square
    }
}

// helper function, uses fact that sqrt of a non-perfect square will be non-integer result cast as int
bool Solution::isPerfectSquare(int n){ return static_cast<int>(sqrt(n))*sqrt(n) == n; }   