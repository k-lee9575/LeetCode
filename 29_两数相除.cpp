#include "pch.h"
class Solution {
public:
	int divide(int dividend, int divisor) {
		long long n64_dividend = abs((long long)dividend);
		long long n64_divisor = abs((long long)divisor);
		int i = 0;
		long long ans = 0;
		if (n64_divisor != 1) {
			while ((n64_divisor << ++i) < n64_dividend);

			for (; n64_dividend >= n64_divisor; i--)
			{
				long long  nbase = n64_divisor << i;
				if (n64_dividend >= nbase)
				{
					ans += (long long)1 << i;
					n64_dividend = n64_dividend - nbase;
				}
			}
		}
		else {
			ans = n64_dividend;
		}
		if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor>0)) {
			return 0 - ans;
		}
		else {
			return ans > INT_MAX ? INT_MAX : ans;
		}

	}
};