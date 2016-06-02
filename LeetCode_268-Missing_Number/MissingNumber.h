#include <vector>
#include <algorithm>

using namespace std;

/*
268. Missing Number
Difficulty: Medium
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
For example,
Given nums = [0, 1, 3] return 2.
Note:
Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?
*/

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		//sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); ){
			if (nums[i] != i && nums[i] < nums.size()){
				swap(nums[i], nums[nums[i]]);
			}
			else
				i++;
		}
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] != i)
				return i;
		}
		return nums.size();
	}
};

class Solution1 {
public:
	int missingNumber(vector<int>& nums) {
	    vector<bool> flag(nums.size(), false);
		for (int i = 0; i < nums.size(); i++)
			flag[nums[i]] = true;
		for (int i = 0; i < nums.size(); ++i) {
			if (!flag[i])
				return i;
		}
		return nums.size();
	}
};
