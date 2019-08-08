#include "pch.h"
class Solution {
public:
	vector<string> letterCombinations(string digits) {
		if (digits == "") {
			return {};
		}
		int num[8] = { 3,3,3,3,3,4,3,4 };
		int offset[8] = { 0,3,6,9,12,15,19,22 };
		vector<string> *pAns = new vector<string>{ "" };
		vector<string> *ptemp = new vector<string>;
		for (int i = 0; i < digits.size(); i++) {
			ptemp->clear();
			int nDigit = digits[i] - '2';
			for (int j = 0; j < pAns->size(); j++) {
				for (int k = 0; k < num[nDigit]; k++) {
					ptemp->push_back((*pAns)[j] + (char)('a' + offset[nDigit] + k));
				}
			}
			swap(pAns, ptemp);
		}
		return *pAns;
	}
};