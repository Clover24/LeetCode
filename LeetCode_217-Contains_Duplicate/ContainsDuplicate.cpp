#include "ContainsDuplicate.h"
#include <iostream>

int main()
{
	Solution sol;
	int ints[] = { 16, 2, 7, 2 };
	vector<int> nums(ints, ints + sizeof(ints) / sizeof(int));
	bool res = sol.containsDuplicate(nums);
	cout << res << endl;
	return 0;
}