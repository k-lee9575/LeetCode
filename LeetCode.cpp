// LeetCode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"

//include CPP 文件是不规范的做法

//#include "6_Z字形变换.cpp"
//#include "7_整数反转.cpp"
//#include "8_字符串转换整数.cpp"
//#include "9_回文数.cpp"
//#include "10_正则表达式匹配.cpp"
//#include "11_盛最多水的容器.cpp"
//#include "12_整数转罗马数字.cpp"
//#include "13_罗马数字转整数.cpp"
//#include "14_最长公共前缀.cpp"
//#include "15_三数之和.cpp"
//#include "16_最接近的三数之和.cpp"
//#include "17_电话号码的字母组合.cpp"
//#include "18_四数之和.cpp"
//#include "19_删除链表的倒数第N个节点.cpp"
//#include "20_有效的括号.cpp"
//#include "21_合并两个有序链表.cpp"
//#include "22_括号生成.cpp"
#include "23_合并K个排序链表.cpp"

int main()
{
	Solution ans;
	//6_Z字形变换
	//string q = "A";
	//int numRows = 2;
	//cout << ans.convert(q, numRows) << endl;

	//7_整数反转
	//cout << ans.reverse(-123) << endl;

	//8_字符串转换整数
	//string s = "42";
	//cout << ans.myAtoi(s) << endl;

	//9_回文数
	//cout << ans.isPalindrome(215) << endl;

	//10_正则表达式匹配
	//cout << ans.isMatch("aab","c*a*ab") << endl;
	//cout << ans.isMatch("aab", ".*ab") << endl;
	//cout << ans.isMatch("bcaab", "ac.*ab") << endl;
	//cout << ans.isMatch("bcaab", "bc.*ab") << endl;

	//11_盛最多水的容器
	//vector<int> height;
	//height.push_back(2);
	//height.push_back(1);
	//cout << ans.maxArea(height) << endl;

	//12_整数转罗马数字
	//cout << ans.intToRoman(1024) << endl;
	//cout << ans.intToRoman(1994) << endl;

	//13_罗马数字转整数
	//cout << ans.romanToInt("MCMXCIV")<<endl;

	//14_最长公共前缀
	//vector<string> vStr;
	//cout << ans.longestCommonPrefix(vStr) << endl;

	//15_三数之和
	//vector<int> nums;
	//nums.push_back(-1);
	//nums.push_back(2);
	//nums.push_back(1);
	//nums.push_back(-4);

	//vector<vector<int> > a = ans.threeSum(nums);
	//cout << '[' << endl;
	//for (int i = 0; i < a.size(); i++) {
	//	cout << "\t[" << a[i][0] << ',' << a[i][1] << ',' << a[i][2] << endl;
	//}
	//cout << ']' << endl;


	//16_最接近的三数之和
	//nums = { 1, 2, 4, 8, 16, 32, 64, 128 };
	//cout << ans.threeSumClosest(nums, 82) << endl;

	//17_电话号码的字母组合
	//vector<string> s = ans.letterCombinations("23");
	//cout << s << endl;

	//18_四数之和
	//vector<int> num = { 1, -2, -5, -4, -3, 3, 3, 5 };
	//vector<vector<int>> s = ans.fourSum(num, -11);
	//cout << s << endl;

	//19_删除链表的倒数第N个节点
	//ListNode * pHead = new ListNode(1);
	//ListNode * p = pHead;
	//for (int i = 2; i <= 5; i++) {
	//	ListNode * pt = new ListNode(i);
	//	p->next = pt;
	//	p = pt;
	//}
	//ListNode *pAns = ans.removeNthFromEnd(pHead, 2);
	//cout << *pAns << endl;
	//while (pHead) {
	//	ListNode * p = pHead;
	//	pHead = pHead->next;
	//	delete p;
	//}

	//20_有效的括号
	//cout << ans.isValid("([)]") << endl;

	//21_合并两个有序链表
	//ListNode *p;
	//ListNode *l1 = new ListNode(1);
	//p = l1;
	//p->next = new ListNode(2);
	//p = p->next;
	//p->next = new ListNode(4);

	//ListNode *l2 = new ListNode(1);
	//p = l2;
	//p->next = new ListNode(3);
	//p = p->next;
	//p->next = new ListNode(4);
	//p = ans.mergeTwoLists(l1, l2);
	//cout << *p << endl;
	//while (p) {
	//	ListNode * t = p;
	//	p = p->next;
	//	delete t;
	//}

	//22_括号生成
	//vector<string> s = ans.generateParenthesis(5);
	//cout << s << endl;

	//23_合并K个排序链表
	vector<ListNode *> list;
	ListNode *p;
	ListNode *l1 = new ListNode(1);
	p = l1;
	p->next = new ListNode(4);
	p = p->next;
	p->next = new ListNode(5);
	list.push_back(l1);

	ListNode *l2 = new ListNode(1);
	p = l2;
	p->next = new ListNode(3);
	p = p->next;
	p->next = new ListNode(4);
	list.push_back(l2);

	ListNode *l3 = new ListNode(2);
	p = l2;
	p->next = new ListNode(6);
	list.push_back(l3);

	p = ans.mergeKLists(list);
	cout << *p << endl;
	while (p) {
		ListNode * t = p;
		p = p->next;
		delete t;
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
