#include "pch.h"
class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		if (nums.empty()) {
			return { -1,-1 };
		}
		vector<int> ans;
		int left = 0;
		int right = nums.size() - 1;
		int mid;
		while (left <= right) {
			mid = left + (right - left) / 2;
			if (nums[mid] >= target) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
		}
		if (left < nums.size() && nums[left] == target) {
			ans.push_back(left);
		}
		else {
			return { -1,-1 };
		}

		left = 0;
		right = nums.size() - 1;
		while (left <= right) {
			mid = left + (right - left) / 2;
			if (nums[mid] > target) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
		}
		if (right >= 0 && nums[right] == target) {
			ans.push_back(right);
		}
		else {
			return { -1,-1 };
		}
		return move(ans);

	}
};