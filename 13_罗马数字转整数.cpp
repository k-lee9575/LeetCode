﻿#include "pch.h"
class Solution {
public:
	inline int romanToInt(char c) {
		switch (c)
		{
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
		default:
			break;
		}
		return 0;
	}

	int romanToInt(string s) {
		int ans = 0;
		int nPreNum = 0;
		int nCurNum = 0;
		for (int i = s.size() - 1; i >= 0; i--) {
			nCurNum = romanToInt(s[i]);
			if ( nCurNum < nPreNum) {
				ans -= nCurNum;
			}
			else {
				ans += nCurNum;
				nPreNum = nCurNum;
			}
		}
		return ans;
	}
};