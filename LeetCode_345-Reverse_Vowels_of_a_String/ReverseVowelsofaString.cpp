#include "ReverseVowelsofaString.h"
#include <iostream>

int main()
{
	string s;
	cin >> s;
	Solution sol;
	s = sol.reverseVowels(s);
	cout << s << endl;
	return 0;
}