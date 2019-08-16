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
	ListNode* swapPairs(ListNode* head) {
		if (!head) {
			return head;
		}
		ListNode tmp(0);
		ListNode *p = &tmp;
		ListNode *l = head;
		ListNode *r = l->next;
		p->next = l;
		while (r)
		{
			p->next = r;
			p = l;
			p->next = r->next;
			r->next = l;

			l = p->next;
			if (l == NULL) {
				break;
			}
			else {
				r = l->next;
			}
		}
		return tmp.next;
	}
};

//class Solution {
//public:
//	ListNode* swapPairs(ListNode* head) {
//		if (!head || head->next == NULL) {
//			return head;
//		}
//
//		ListNode *l = head;
//		ListNode *r = l->next;
//		l->next = swapPairs(r->next);
//		r->next = l;
//		return r;
//	}
//};