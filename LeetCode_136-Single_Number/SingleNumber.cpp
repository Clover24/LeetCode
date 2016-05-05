#include "SingleNumber.h"
#include <iostream>

int main()
{
	Solution sol;
	int ints[] = { 1, 2, 6, 2, 1};
	vector<int> nums(ints, ints + sizeof(ints) / sizeof(int));
	int res = sol.singleNumber(nums);
	cout << res << endl;
	return 0;
}