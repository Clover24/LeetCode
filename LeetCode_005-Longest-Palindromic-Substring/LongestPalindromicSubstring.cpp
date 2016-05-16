#include "LongestPalindromicSubstring.h"
#include <iostream>

int main()
{
	Solution sol;
	string s;
	cin >> s;
	string res = sol.longestPalindrome(s);
	cout << res << endl;
	return 0;
}