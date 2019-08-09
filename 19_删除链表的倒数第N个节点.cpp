#include "pch.h"
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		vector<ListNode *> v;
		ListNode * p = head;
		while (p){
			v.push_back(p);
			p = p->next;
		}
		int nIndex = v.size() - n;
		if (nIndex == 0){
			p = v[0]->next;
			delete v[0];
			return p;
		}
		else {
			v[nIndex - 1]->next = v[nIndex]->next;
			delete v[nIndex];
			return head;
		}
	}
};
