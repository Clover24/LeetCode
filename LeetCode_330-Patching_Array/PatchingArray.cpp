#include <iostream>
#include "PatchingArray.h"

int main()
{
	Solution sol;
	int array[] = { 1, 2, 31, 33 };
	vector<int> nums(array, array + sizeof(array) / sizeof(int));
	int res = sol.minPatches(nums, 2147483647);
	cout << res << endl;
	return 0;
}