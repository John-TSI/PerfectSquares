#include<cmath>
#include"../inc/solution.hpp"


/* int Solution::numSquares(int n)
{
    if(isPerfectSquare(n)){ return 1; }

    int count{0}, rem{n}, sub{1};
    while(true)
    {
        if(isPerfectSquare(rem)){ return ++count; }
        rem -= pow(sub++,2);
        if(rem == 1){ return ++count; }
        if(rem < 0){ n -= pow(sub-2,2); rem = n; sub = 1; ++count; continue; }
        if(isPerfectSquare(rem)){ rem = n-rem;  ++count; continue; }
        rem = n;
    }
} */

int Solution::numSquares(int n)
{
    int count{0}, tmp{n}, sub{1};
    while(true)
    {
        if(isPerfectSquare(n)){ return ++count; }
        n -= pow(sub++,2);
        if(n == 1){ return ++count; }
        if(n < 0){ tmp -= pow(sub-2,2); n = tmp; sub = 1; ++count; continue; }
        if(isPerfectSquare(n)){ n = tmp-n; ++count; continue; }
        n = tmp;
    }
}


bool Solution::isPerfectSquare(int n){ return static_cast<int>(sqrt(n))*sqrt(n) == n; }   