#include"pch.h"
class Solution {
public:
	bool isMatch(string s, string p) {
		if (s.size() == 0 && p.size() == 0) {
			return true;
		}
		else if (p.size() == 0) {
			return false;
		}
		int pos = s.size() - 1;
		for (int i = p.size() - 1; i >= 0; i--) {
			if (pos < 0) {
				if (p[i] != '*')
				{
					return false;
				}
				i--;
				continue;
			}

			if (p[i] == '.' || p[i] == s[pos]) {
				pos--;
				continue;
			}
			else if (p[i] != '*') {
				return false;
			}

			if (p[i - 1] == '.' || p[i - 1] == s[pos]) {
				return isMatch(s.substr(0, pos + 1), p.substr(0, i - 1)) || isMatch(s.substr(0, pos), p.substr(0, i + 1));
			}
			else {
				i--;
			}
		}
		return pos != -1 ? false : true;
	}
};