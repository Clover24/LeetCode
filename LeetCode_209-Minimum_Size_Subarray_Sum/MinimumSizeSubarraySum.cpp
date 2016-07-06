#include <iostream>
#include "MinimumSizeSubarraySum.h"

int main()
{
	Solution sol;
	int array[] = { 1, 2, 3, 1, 4, 5, 8 };
	vector<int> nums(array, array + sizeof(array) / sizeof(int));
	int res = sol.minSubArrayLen(7, nums);
	cout << res << endl;
	return 0;
}