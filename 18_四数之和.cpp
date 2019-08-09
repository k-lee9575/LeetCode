#include "pch.h"
class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		if (nums.size() < 4) {
			return {};
		}
		vector<vector<int>> ans;

		for (int i = 0; i < nums.size() - 3;) {
			//if (nums[i] > target) {
			//	break;
			//}
			if (i > 0 && nums[i] == nums[i - 1]) {
				continue;
			}
			int nFind1 = target - nums[i];
			for (int j = i + 1; j < nums.size() - 2;) {
				//if (nums[j] > nFind1) {
				//	break;
				//}
				if (j > i + 1 && nums[j] == nums[j - 1]) {
					continue;
				}
				int k = j + 1;
				int l = nums.size() - 1;
				int nFind2 = nFind1 - nums[j];
				while (k < l) {
					if (2 * nums[k] > nFind2) {
						break;
					}
					int sum = nums[k] + nums[l];
					if (sum > nFind2) {
						l--;
					}
					else if (sum < nFind2) {
						k++;
					}
					else {
						ans.push_back({ nums[i], nums[j], nums[k],nums[l] });
						for (l--; nums[l] == nums[l + 1] && k < l; l--);
						for (k++; nums[k] == nums[k - 1] && k < l; k++);
					}
				}
				for (j++; j < nums.size() - 2 && nums[j] == nums[j - 1]; j++);
			}
			for (i++; i < nums.size() - 3 && nums[i] == nums[i - 1]; i++);
		}
		return ans;
	}
};