#include <iostream>
#include "DecodeWays.h"

int main()
{
	Solution sol;
	string s;
	cin >> s;
	int val = sol.numDecodings(s);
	cout << val << endl;
	return 0;
}