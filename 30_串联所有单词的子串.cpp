#include "pch.h"
class Solution {
public:
	vector<int> findSubstring(string s, vector<string>& words) {
		if (words.empty() || s.empty() || s.size() < words[0].size() * words.size()) {
			return {};
		}
		vector<int> ans;
		int nLength = words[0].size();
		unordered_map<string, int> mapWords;
		for (auto itWords = words.begin(); itWords != words.end(); itWords++) {
			mapWords[*itWords]++;
		}

		for (int i = 0; i < nLength; i++) {
			int nLeft = i;
			int nRight = i;
			int nCount = 0;
			unordered_map<string, int> tmp_mapWords;
			while (nRight + nLength <= s.size()) {
				string w = s.substr(nRight, nLength);
				nRight += nLength;
				auto itFind = mapWords.find(w);
				if (itFind == mapWords.end()) {
					tmp_mapWords.clear();
					nCount = 0;
					nLeft = nRight;
				}
				else {
					tmp_mapWords[w]++;
					nCount++;
					while (tmp_mapWords[w] > mapWords[w]) {
						string t_w = s.substr(nLeft, nLength);
						nCount--;
						tmp_mapWords[t_w]--;
						nLeft += nLength;
					}
					if (nCount == words.size()) {
						ans.push_back(nLeft);
					}
				}
			}
		}
		return ans;
	}
};