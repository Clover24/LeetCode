#include <iostream>
#include "ShortestPalindrome.h"

int main()
{
	Solution sol;
	string s;
	cin >> s;
	string res = sol.shortestPalindrome(s);
	cout << res << endl;
	return 0;
}