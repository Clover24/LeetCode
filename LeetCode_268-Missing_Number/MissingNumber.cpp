#include <iostream>
#include "MissingNumber.h"

int main()
{
	int nums[] = { 1, 2, 3, 0};
	vector<int> num(nums, nums + sizeof(nums) / sizeof(int));
	Solution sol;
	int res = sol.missingNumber(num);
	cout << res << endl;
	return 0;
}