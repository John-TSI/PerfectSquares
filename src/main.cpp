#include<iostream>
#include"../inc/solution.hpp"


int main()
{
	std::cout << Solution().numSquares(12) << '\n';  // 4+4+4 --> 3
	std::cout << Solution().numSquares(104) << '\n';  // 100+4 --> 2
	std::cout << Solution().numSquares(14) << '\n';  // 9+4+1 --> 3
	std::cout << Solution().numSquares(5) << '\n';  // 4+1 --> 2
	return 0;
}

