// pch.cpp: 与预编译标头对应的源文件；编译成功所必需的

#include "pch.h"
ostream &operator <<(ostream &out, ListNode &list) {
	ListNode * p = &list;
	while (p) {
		out << p->val;
		if (p->next) {
			out << "->";
		}
		p = p->next;
	}
	return out;
}

// 一般情况下，忽略此文件，但如果你使用的是预编译标头，请保留它。
