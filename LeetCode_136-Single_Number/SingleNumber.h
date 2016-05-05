#include <vector>

using namespace std;

/*136. Single Number
Difficulty : Medium
Given an array of integers, every element appears twice except for one.Find that single one.*/
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int res = 0;
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
			res ^= (*it);
		return res;
	}
};