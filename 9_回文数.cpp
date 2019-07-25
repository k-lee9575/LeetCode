#include "pch.h"
class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0 || (x % 10 == 0 && x != 0)) {
			return false;
		}
		vector<int> ans;
		ans.reserve(20);
		while (x) {
			ans.push_back(x % 10);
			x /= 10;
		}
		int length = ans.size();
		for (int i = 0; i < length/2; i++) {
			if (ans[i] != ans[length - i - 1]) {
				return false;
			}
		}
		return true;
	}
};