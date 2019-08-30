#include "pch.h"

class Solution {
public:
	string countAndSay(int n) {
		string ans[30];
		ans[0] = "1";
		char nCount;
		char prev;
		for (int i = 1; i < n; i++) {
			prev = ans[i - 1][0];
			nCount = '0';
			for (int j = 0; j < ans[i -1].size(); j++) {
				if (ans[i - 1][j] == prev) {
					nCount++;
				}
				else {
					ans[i] += nCount;
					ans[i] += prev;
					prev = ans[i - 1][j];
					nCount = '1';
				}
			}
			ans[i] += nCount;
			ans[i] += prev;
		}
		return ans[n - 1];
	}
};

//class Solution {
//public:
//	string countAndSay(int n) {
//		string ans[30];
//		ans[0] = "1";
//		int nCount;
//		for (int i = 1; i < n; i++) {
//			for (int j = ans[i - 1].size() - 1; j >= 0; j--) {
//				ans[i] = ans[i - 1][j] + ans[i];
//				nCount = 1;
//				for (; j > 0 && ans[i - 1][j] == ans[i - 1][j - 1]; j--, nCount++);
//				ans[i] = (char)(nCount + '0') + ans[i];
//			}
//		}
//		return ans[n - 1];
//	}
//};