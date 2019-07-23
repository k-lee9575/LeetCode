#include "pch.h"
class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows == 1) {
			return s;
		}
		string ans;
		int nIndex;
		int nIndex2;
		int nEle = numRows * 2 - 2;
		int n = (s.size() - 1 + nEle) / nEle;
		for (int i = 0; i < numRows; i++) {
			for (int j = 0; j < n; j++) {
				nIndex = nEle * j + i;

				if (nIndex < s.size()) {
					ans += s[nIndex];
				}
				if (i != 0 && i != numRows - 1) {
					nIndex2 = nEle * (j + 1) - i;
					if (nIndex2 < s.size()) {
						ans += s[nIndex2];
					}
				}
			}
		}
		return ans;
	}
};
