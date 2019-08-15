#include "pch.h"
class Solution {
private:
	vector<string> ans;
	char *c;
public:
	void generateParenthesis(int n, int left, int right) {
		if (right == n) {
			ans.push_back(c);
		}
		else if (left == n) {
			for (; right < n; right++) {
				c[left + right] = ')';
			}
			ans.push_back(c);
		}
		else {
			c[left + right] = '(';
			generateParenthesis(n, left + 1, right);
			if (right < left) {
				c[left + right] = ')';
				generateParenthesis(n, left, right + 1);
			}
		}
	}
	vector<string> generateParenthesis(int n) {
		if (n == 0) {
			return {};
		}

		c = new char[n * 2 + 1];
		c[n * 2] = '\0';
		c[0] = '(';
		generateParenthesis(n, 1 , 0);
		delete[] c;
		return ans;
	}
};