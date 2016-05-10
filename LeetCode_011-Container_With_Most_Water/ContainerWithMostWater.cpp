#include "ContainerWithMostWater.h"
#include <iostream>

int main()
{
	Solution sol;
	int nums[] = { 2, 3, 1, 2, 1 };
	vector<int> height(nums, nums + 4);
	int maxarea = sol.maxArea(height);
	cout << maxarea << endl;
	return 0;
}