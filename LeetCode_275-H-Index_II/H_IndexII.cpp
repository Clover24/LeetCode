#include <iostream>
#include "H_IndexII.h"

int main()
{
	int nums[] = { 0, 0, 3, 4, 5 };
	vector<int> num(nums, nums + sizeof(nums) / sizeof(int));
	Solution sol;
	int res = sol.hIndex(num);
	cout << res << endl;
	return 0;
}
