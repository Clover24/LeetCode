#include <vector>
#include <string>

using namespace std;

/*
228. Summary RangesDifficulty: Medium
Given a sorted integer array without duplicates, return the summary of its ranges.
For example, given [0,1,2,4,5,7], return ["0->2","4->5","7"].
*/

class Solution {
public:
	vector<string> summaryRanges(vector<int>& nums) {
		vector<string> res;
		if (nums.size() <= 0)
			return res;
		int index = 0;
		for (int i = 0; i < nums.size(); ++i) {
			if (i > 0 && nums[i] > nums[i - 1] + 1) {
				string str = to_string(nums[index]);
				if (index != i - 1) {
					str += "->";
					str += to_string(nums[i - 1]);
				}
				res.push_back(str);
				index = i;
			}
		}
		string str = to_string(nums[index]);
		if (index != nums.size() - 1) {
			str += "->";
			str += to_string(nums[nums.size() - 1]);
		}
		res.push_back(str);
		return res;
	}
};