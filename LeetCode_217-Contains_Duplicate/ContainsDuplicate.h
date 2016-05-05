#include <vector>
#include <unordered_set>

using namespace std;

//easy
class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		unordered_set<int> myset;
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
			if (myset.find(*it) != myset.end())
				return true;
			myset.insert(*it);
		}
		return false;
	}
};