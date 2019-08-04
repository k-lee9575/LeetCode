#include "pch.h"
class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		if (nums.size() < 3 || nums.back() < 0 || nums.front() > 0)
			return{};
		vector<vector<int>> ans;
		for (int i = 0; i < nums.size() - 2;) {
			if (nums[i] > 0) {
				break;
			}
			if (i > 0 && nums[i] == nums[i - 1]) {
				continue;
			}
			int j = i + 1;
			int k = nums.size() - 1;
			int nFind = 0 - nums[i];
			while (j < k) {
				if (nums[i] + 2 * nums[j] > 0) {
					break;
				}
				int sum = nums[j] + nums[k];
				if (sum > nFind) {
					k--;
				}
				else if(sum < nFind){
					j++;
				}
				else{
					ans.push_back({ nums[i], nums[j], nums[k] });
					for (k--; nums[k] == nums[k + 1] && j < k; k--);
					for (j++; nums[j] == nums[j - 1] && j < k; j++);
				}
			}
			for (i++; i < nums.size() - 2 && nums[i] == nums[i - 1]; i++);
		}
		return ans;
	}
};