#include "ContainsDuplicate_II.h"
#include <iostream>

int main()
{
	Solution sol;
	int ints[] = { 16, 2, 7, 5, 9, 2 };
	vector<int> nums(ints, ints + sizeof(ints) / sizeof(int));
	bool res = sol.containsNearbyDuplicate(nums, 3);
	cout << res << endl;
	return 0;
}