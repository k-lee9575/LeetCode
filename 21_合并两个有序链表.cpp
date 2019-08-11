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
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode ans(0);
		ListNode *p = &ans;

		while (l1 != NULL || l2 != NULL)
		{
			if (l1 == NULL) {
				p->next = l2;
				break;
			}
			else if (l2 == NULL)
			{
				p->next = l1;
				break;
			}

			if (l1->val <= l2->val) {
				p->next = l1;
				l1 = l1->next;
			}
			else {
				p->next = l2;
				l2 = l2->next;
			}
			p = p->next;
		}
		return ans.next;
	}
};