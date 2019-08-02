#include "pch.h"
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.size() == 0) {
			return "";
		}
		else if (strs.size() == 1) {
			return strs[0];
		}
		int pos;
		string &sTemp = strs[0];
		bool bFinish = false;
		char c;
		for ( pos = 0; !bFinish; pos++) {
			c = sTemp[pos];
			for (int i = 1; i < strs.size(); i++) {
				if (pos >= strs[i].size() || strs[i][pos] != c) {
					bFinish = true;
					break;
				}
			}
		}
		return sTemp.substr(0, pos - 1);

	}
};