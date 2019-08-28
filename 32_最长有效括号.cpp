#include "pch.h"
class Solution {
public:
	int longestValidParentheses(string s) {
		vector<pair<int, int>> p;
		int lCnt = 0;
		int rCnt = 0;
		int start = -1;
		int nLength = 0;
		int ans = 0;
		int i;
		for (i = 0; i < s.size(); i++) {
			nLength++;
			if (s[i] == '(') {
				lCnt++;
				if (nLength == 1) {
					start = i;
				}
			}
			else {
				rCnt++;
				if (rCnt > lCnt) {
					if (nLength > 1 && rCnt > 0) {
						p.push_back(make_pair(start, i - 1));
					}
					nLength = 0;
					lCnt = 0;
					rCnt = 0;
				}
			}
		}
		if (nLength > 1 && rCnt > 0) {
			p.push_back(make_pair(start, i-1));
		}
		lCnt = 0;
		rCnt = 0;
		nLength = 0;
		for (auto it = p.begin(); it != p.end(); it++) {
			if (it->second - it->first >= ans) {
				for (int i = it->second; i >= it->first; i--) {
					nLength++;
					if (s[i] == ')') {
						rCnt++;
					}
					else {
						lCnt++;
						if (lCnt > rCnt) {
							ans = max(ans, nLength - 1);
							nLength = 0;
							lCnt = 0;
							rCnt = 0;
						}
						else if (i == it->first) {
							ans = max(ans, nLength);
							nLength = 0;
						}
						
					}
				}
			}
		}
		return ans;
	}
}; 