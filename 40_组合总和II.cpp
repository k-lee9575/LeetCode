#include "pch.h"
class Solution {
public:
	void recursionCombinationSum(vector<int> &candidates, vector<vector<int>>& anss, int nIndex, vector<int> &ans, int sum, int target) {
		for (int i = nIndex; i < candidates.size(); i++) {
			if (i > nIndex && candidates[i] == candidates[i - 1]) {
				continue;
			}
			if (sum + candidates[i] == target) {
				ans.push_back(candidates[i]);
				anss.push_back(ans);
				ans.pop_back();
				break;
			}
			else if (sum + candidates[i] > target) {
				break;
			}
			else {
				ans.push_back(candidates[i]);
				recursionCombinationSum(candidates, anss, i + 1, ans, sum + candidates[i], target);
				ans.pop_back();
			}
		}
	}

	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		vector<vector<int>> anss;
		vector<int> ans;
		sort(candidates.begin(), candidates.end());
		recursionCombinationSum(candidates, anss, 0, ans, 0, target);
		return anss;
	}
};