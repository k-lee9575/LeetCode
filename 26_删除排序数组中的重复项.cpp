#include "pch.h"


class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int i = 0;
		for (int j = 0; j < nums.size(); ++j) {
			if (i == 0 || nums[i - 1] != nums[j]) {
				nums[i++] = nums[j];
			}
		}
		return i;
	}
};


//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		if (nums.size() == 0) {
//			return 0;
//		}
//		int nCount = 1;
//		int n = nums[0];
//		for (auto it = nums.begin() + 1; it != nums.end(); it++) {
//			while ( it != nums.end() && *it == n){
//				*it = INT_MAX;
//				it++;
//			}
//			if (it == nums.end()) {
//				break;
//			}
//			else{
//				nCount++;
//				n = *it;
//			}
//		}
//		sort(nums.begin(), nums.end());
//		nums.resize(nCount);
//		return nums.size();
//	}
//};