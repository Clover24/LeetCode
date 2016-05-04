#include <vector>
#include <set>
#include <iostream>

using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		set<int> myset;
		set<int>::iterator its;
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
			its = myset.find(*it);
			if (its != myset.end())
				return true;
			else {
				myset.insert(*it);
			}
		}
		return false;
	}
};

int main()
{
	Solution sol;
	int ints[] = { 16, 2, 7, 2 };
	vector<int> nums(ints, ints + sizeof(ints) / sizeof(int));
	bool res = sol.containsDuplicate(nums);
	cout << res << endl;
	return 0;
}