#include "pch.h"
class Solution {
public:
	int maxArea(vector<int>& height) {
		vector<pair<int, int> > vl;
		vector<pair<int, int> > vr;
		int nFlag = 0;
		for (int i = 0; i < height.size(); i++) {
			if (height[i] > nFlag) {
				nFlag = height[i];
				vl.push_back(make_pair(i, height[i]));
			}
		}
		nFlag = 0;
		for (int i = height.size() - 1; i >= 0; i--) {
			if (height[i] > nFlag) {
				nFlag = height[i];
				vr.push_back(make_pair(i, height[i]));
			}
		}
		nFlag = 0;
		for (int i = 0; i < vl.size(); i++) {
			for (int j = 0; j <vr.size(); j++) {
				if (vl[i].first >= vr[j].first)
				{
					break;
				}
				nFlag = max(nFlag, (vr[j].first - vl[i].first)*min(vl[i].second, vr[j].second));
			}
		}
		return nFlag;
	}
};