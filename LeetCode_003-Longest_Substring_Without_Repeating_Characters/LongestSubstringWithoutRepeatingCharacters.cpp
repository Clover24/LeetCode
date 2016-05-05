#include <iostream>
#include "LongestSubstringWithoutRepeatingCharacters.h"

int main()
{
	Solution sol;
	string s("fdvd");
	int max = sol.lengthOfLongestSubstring(s);
	cout << max << endl;
	return 0;
}