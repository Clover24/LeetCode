#include <string>
#include <stack>

using namespace std;

/*
20. Valid Parentheses
Difficulty: Easy
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
*/

class Solution {
public:
	bool isValid(string s) {
		const int len = s.length();
		int i = 0;
		stack<char> stack;
		while (i < len) {
			if (!validchar(s[i]))
				return false;
			if (stack.empty() || !correct(stack.top(), s[i]))
				stack.push(s[i]);
			else
				stack.pop();
			i++;
		}
		if (stack.empty())
			return true;
		else
			return false;
	}
	bool validchar(char a) {
		if (a == '(' || a == ')' || a == '{' || a == '}' || a == '[' || a == ']')
			return true;
		else
			return false;
	}
	bool correct(char a, char b) {
		if ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'))
			return true;
		else
			return false;
	}
};