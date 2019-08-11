#include "pch.h"
class Solution {
public:
	bool isValid(string s) {
		stack<char> stackChar;
		for (int i = 0; i < s.size(); i++) {
			switch (s[i])
			{
			case '(':
			case '[':
			case '{':
				stackChar.push(s[i]);
				continue;
				break;
			case ')':
				if (stackChar.size() == 0 || stackChar.top() != '(') {
					return false;
				}
				break;
			case ']':
				if (stackChar.size() == 0 || stackChar.top() != '[') {
					return false;
				}
				break;
			case  '}':
				if (stackChar.size() == 0 || stackChar.top() != '{') {
					return false;
				}
				break;
			default:
				break;
			}
			stackChar.pop();
		}
		return stackChar.size() == 0 ? true : false;
	}
};