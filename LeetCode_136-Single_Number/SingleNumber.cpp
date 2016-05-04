#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int res = 0;
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
			res ^= (*it);
		return res;
	}
};

int main()
{
	Solution sol;
	int ints[] = { 1, 2, 6, 2, 1};
	vector<int> nums(ints, ints + sizeof(ints) / sizeof(int));
	int res = sol.singleNumber(nums);
	cout << res << endl;
	return 0;
}