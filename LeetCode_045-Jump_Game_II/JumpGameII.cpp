#include <iostream>
#include "JumpGameII.h"

int main()
{
	int nums[] = { 1, 2, 1, 4, 0 };
	vector<int> num(nums, nums + sizeof(nums) / sizeof(int));
	Solution sol;
	int res = sol.jump(num);
	cout << res << endl;
	return 0;
}

