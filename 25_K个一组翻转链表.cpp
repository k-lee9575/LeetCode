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
	ListNode* reverseKGroup(ListNode* head, int k) {
		if (k < 2 || !head || !head->next) {
			return head;
		}
		ListNode tmp(0);
		ListNode *pre = &tmp;
		vector<ListNode *> vNode;
		vNode.reserve(k);
		ListNode *t = head;
		pre->next = t;
		while (t)
		{
			vNode.clear();
			for (int i = 0; i < k && t != NULL; i++) {
				vNode.push_back(t);
				t = t->next;
			}
			if (vNode.size() < k) {
				break;
			}
			pre->next = vNode[k - 1];
			pre = vNode[0];
			for (int i = 1; i < k; i++) {
				vNode[i]->next = vNode[i - 1];
			}
			pre->next = t;
		}
		return tmp.next;
	}
};
//class Solution {
//public:
//	ListNode* reverseKGroup(ListNode* head, int k) {
//		if (k < 2 || !head || !head->next) {
//			return head;
//		}
//		ListNode tmp(0);
//		ListNode *pre = &tmp;
//		ListNode *t = head;
//		ListNode *tail = NULL;
//		pre->next = t;
//		while (t)
//		{
//			int nCount = 0;
//			for (int i = 0; i < k && t != NULL; i++) {
//				nCount++;
//				tail = t;
//				t = t->next;
//			}
//			if (nCount < k) {
//				break;
//			}
//			head = pre->next;
//			pre->next = tail;
//			pre = head;
//			ListNode *p;
//			ListNode *next = head->next;
//			while (head != tail)
//			{
//				p = head;
//				head = next;
//				next = head->next;
//				head->next = p;
//			}
//			pre->next = t;
//		}
//		return tmp.next;
//	}
//};