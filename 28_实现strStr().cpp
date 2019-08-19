#include "pch.h"
//KMP算法
class Solution {
public:
	void preDeal(vector<int> &p, string pattern) {
		p.push_back(-1);
		int j = -1;
		for (int i = 1; i < pattern.size(); i++) {
			while (j > -1 && pattern[j + 1] != pattern[i]) {
				j = p[j];
			}
			if (pattern[j + 1] == pattern[i]) {
				j++;
			}
			p.push_back(j);
		}
	}
	int strStr(string haystack, string needle) {
		if (needle.empty()) {
			return 0;
		}
		vector<int> p;
		preDeal(p, needle);
		int j = -1;
		for (int i = 0; i < haystack.size(); i++) {
			while (j > -1 && needle[j + 1] != haystack[i]) {
				j = p[j];
			}
			if (needle[j + 1] == haystack[i]) {
				j++;
			}
			if (j == needle.size() - 1) {
				return i - j;
			}
		}
		return -1;
	}
};