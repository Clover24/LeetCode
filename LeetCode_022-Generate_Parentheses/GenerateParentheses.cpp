#include "GenerateParentheses.h"
#include <iostream>

int main()
{
	Solution sol;
	vector<string> s;
	cin >> s;
	vector<string> res = sol.longestPalindrome(s);
	//cout << res << endl;
	return 0;
}