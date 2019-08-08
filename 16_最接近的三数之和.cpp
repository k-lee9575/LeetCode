#include "pch.h"
class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		int ans;
		int nIntermal = (1 << 31) - 1;

		for (int i = 0; i < nums.size() - 2;) {
			if (nums[i] - target > nIntermal) {
				break;
			}
			if (i > 0 && nums[i] == nums[i - 1]) {
				continue;
			}
			int j = i + 1;
			int k = nums.size() - 1;
			while (j < k) {
				if (nums[i] + 2 * nums[j] - target > nIntermal) {
					break;
				}
				int sum = nums[i] + nums[j] + nums[k];
				int nIntermaltmp = abs(sum - target);
				if (nIntermaltmp < nIntermal) {
					ans = sum;
					nIntermal = nIntermaltmp;
				}

				if (sum > target) {
					k--;
				}
				else if (sum < target) {
					j++;
				}
				else {
					return target;
				}
			}
			for (i++; i < nums.size() - 2 && nums[i] == nums[i - 1]; i++);
		}
		return ans;
	}
};