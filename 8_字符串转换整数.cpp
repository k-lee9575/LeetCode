#include "pch.h"
class Solution {
public:
	int myAtoi(string str) {
		long long ans = 0;
		int sign = 1;
		bool flag = false;
		int pos = 0;
		int size = str.size();
		while (str[pos] == ' ' && ++pos < size);
		do
		{
			if (str[pos] >= '0' && str[pos] <= '9') {
				ans = ans * 10 + str[pos] - '0';
				if (ans > INT_MAX) {
					return sign > 0 ? INT_MAX : INT_MIN;
				}
			}
			else if (str[pos] == '-' && !flag) {
				sign = -1;
			}
			else if (flag || str[pos] != '+') {
				break;
			}
			flag = true;
		} while (++pos < size);
		return ans * sign;
	}
};