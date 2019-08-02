#include "pch.h"
class Solution {
public:
	string intToRoman(int num) {
		string ans;
		int nData[5] = { 10000, 1000, 100, 10, 1 };
		char cBase[5] = { ' ', 'M', 'C', 'X', 'I' };
		char cMid[5] = { ' ', ' ', 'D', 'L', 'V' };
		int nCount;
		for (int i = 1; i <= 4; i++) {
			nCount = num / nData[i];
			num = num % nData[i];

			switch (nCount)
			{
			case 4:
				ans += cBase[i];
				ans += cMid[i];
				break;
			case 9:
				ans += cBase[i];
				ans += cBase[i - 1];
				break;
			default:
				if (nCount >= 5) {
					ans += cMid[i];
					nCount -= 5;
				}
				for (int j = 0; j < nCount; j++) {
					ans += cBase[i];
				}
				break;
			}
		}
		return ans;

	}
};