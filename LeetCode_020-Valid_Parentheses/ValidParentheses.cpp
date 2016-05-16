#include "ValidParentheses.h"
#include <iostream>

int main()
{
	Solution sol;
	string s;
	cin >> s;
	bool res = sol.isValid(s);
	cout << res << endl;
	return 0;
}