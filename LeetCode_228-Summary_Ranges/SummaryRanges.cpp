#include <iostream>
#include "SummaryRanges.h"

int main()
{
	int nums[] = { 1, 2, 3, 5, 7, 9 };
	vector<int> num(nums, nums + sizeof(nums) / sizeof(int));
	Solution sol;
	vector<string> res = sol.summaryRanges(num);
	for (int i = 0; i < res.size(); ++i)
		cout << res[i] << endl;
	return 0;
}