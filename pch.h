﻿// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

#ifndef PCH_H
#define PCH_H

// TODO: 添加要在此处预编译的标头
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

template<typename T>
ostream &operator << (ostream &out, vector<T> &v) {
	out << '[';
	for (int i = 0; i < v.size(); i++) {
		if (i != 0) {
			out << ',';
		}
		out << v[i];
	}
	out << ']';
	return out;
}


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ostream &operator <<(ostream &out, ListNode &list);
	

#endif //PCH_H
