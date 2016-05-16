#include "SearchInsertPosition.h"
#include <iostream>

int main()
{
	Solution sol;
	int n[4] = {1, 2, 5, 6};
	vector<int> nums(n, n + 4);
	int res = sol.searchInsert(nums, 2);
	cout << res << endl;
	return 0;
}