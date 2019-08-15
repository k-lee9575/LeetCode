﻿#include "pch.h"
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
		if (!head || head->next == NULL) {
			return head;
		}

		ListNode *l = head;
		ListNode *r = l->next;
		l->next = swapPairs(r->next);
		r->next = l;
		return r;
	}
};