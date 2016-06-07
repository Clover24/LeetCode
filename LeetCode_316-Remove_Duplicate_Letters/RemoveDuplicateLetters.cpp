#include <iostream>
#include "RemoveDuplicateLetters.h"

int main()
{
	string s;
	Solution sol;
	cin >> s;
	string res = sol.removeDuplicateLetters(s);
	cout << res << endl;
	return 0;
}