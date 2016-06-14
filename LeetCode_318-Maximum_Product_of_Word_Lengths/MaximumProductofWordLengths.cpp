#include <iostream>
#include "MaximumProductofWordLengths.h"

int main()
{
	string words[4] = { "abcd", "ff", "bfg", "ad"};
	vector<string> word(words, words + 4);
	Solution sol;
	int res = sol.maxProduct(word);
	cout << res << endl;
	return 0;
}
