#include <iostream>
#include "H_Index.h"

int main()
{
	int nums[] = { 1, 2, 1, 4, 0 };
	vector<int> num(nums, nums + sizeof(nums) / sizeof(int));
	Solution sol;
	int res = sol.hIndex(num);
	cout << res << endl;
	return 0;
}
