#include "pch.h"
class Solution {
public:
	void nextPermutation(vector<int>& nums) {
		if (nums.size() > 1) {
			int i;
			for (i = nums.size() - 1; i > 0 && nums[i - 1] >= nums[i]; i--);

			reverse(nums.begin() + i, nums.end());
			if (i-- != 0) {
				auto it = upper_bound(nums.begin() + i, nums.end(), nums[i]);
				swap(nums[i], *it);

				//手撸二分查找
				//int left = i--;
				//int right = nums.size() - 1;
				//while (left <= right) {
				//	int mid = (left + right) / 2;
				//	if (nums[mid] > nums[i]) {
				//		right = mid - 1;
				//	}
				//	else {
				//		left = mid + 1;
				//	}
				//}
				//swap(nums[i], left);
			}
		}
	}
};

//class Solution {
//public:
//	void nextPermutation(vector<int>& nums) {
//		if (nums.size() != 0 && nums.size() != 1) {
//			queue<int> tmp;
//			tmp.push(nums.back());
//			int i;
//			for (i = nums.size() - 1; i > 0 && nums[i - 1] >= nums[i]; i--) {
//				tmp.push(nums[i - 1]);
//			}
//			if (tmp.size() == nums.size()) {
//				reverse(nums.begin(), nums.end());
//			}
//			else {
//				bool nFlag = false;
//				int nPos = i - 1;
//				while (tmp.size()) {
//					if (tmp.front() <= nums[nPos] || nFlag) {
//						nums[i++] = tmp.front();
//					}
//					else {
//						nums[i++] = nums[nPos];
//						nums[nPos] = tmp.front();
//						nFlag = true;
//					}
//					tmp.pop();
//				}
//			}
//		}
//
//	}
//};