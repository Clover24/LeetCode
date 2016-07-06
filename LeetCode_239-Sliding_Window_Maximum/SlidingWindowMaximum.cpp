#include <iostream>
#include "SlidingWindowMaximum.h"

int main()
{
	Solution sol;
	int array[] = { 3, 2, 1, 3, 4, 1, 2 };
	vector<int> nums(array, array + sizeof(array) / sizeof(int));
	vector<int> res = sol.maxSlidingWindow(nums, 3);
	for (auto i : res)
		cout << i << endl;
	return 0;
}
