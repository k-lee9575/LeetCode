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
	struct CMP{
		bool operator()(ListNode *&l, ListNode *&r) {
			return l->val > r->val;
		}
	};

	ListNode* mergeKLists(vector<ListNode*>& lists) {
		if (lists.size() == 0) {
			return NULL;
		}
		else if (lists.size() == 1) {
			return lists[0];
		}
		priority_queue<ListNode *, vector<ListNode *>, CMP> pq_ListNode;
		for (int i = 0; i < lists.size(); i++) {
			if (lists[i]) {
				pq_ListNode.push(lists[i]);
			}
		}
		ListNode ans(0);
		ListNode *p = &ans;
		while (pq_ListNode.size())
		{
			p->next = pq_ListNode.top();
			pq_ListNode.pop();
			p = p->next;
			if (p->next != NULL) {
				pq_ListNode.push(p->next);
			}
			
		}
		
		return ans.next;
	}
};