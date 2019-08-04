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
#include "15_三数之和.cpp"


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
	vector<int> nums;


		nums.push_back(1);
		nums.push_back(2);
		nums.push_back(-2);
		nums.push_back(-1);
	
	
	

	vector<vector<int> > a = ans.threeSum(nums);
	cout << '[' << endl;
	for (int i = 0; i < a.size(); i++) {
		cout << "\t[" << a[i][0] << ',' << a[i][1] << ',' << a[i][2] << endl;
	}
	cout << ']' << endl;

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
