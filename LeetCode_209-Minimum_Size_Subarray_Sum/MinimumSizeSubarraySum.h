#include <vector>

using namespace std;

/*
209. Minimum Size Subarray Sum
Difficulty: Medium
Given an array of n positive integers and a positive integer s, find the minimal length of a subarray of which the sum ¡Ý s. If there isn't one, return 0 instead.

For example, given the array [2,3,1,2,4,3] and s = 7,
the subarray [4,3] has the minimal length under the problem constraint.
*/

class Solution {
public:
	int minSubArrayLen(int s, vector<int>& nums) {
		int sum = 0;
		int minlen = 0;
		int start = 0;
		for (int i = 0; i < nums.size(); ++i) {
			sum += nums[i];
			while (sum >= s && start <= i) {
				if (minlen == 0 || minlen > i - start + 1)
					minlen = i - start + 1;
				sum -= nums[start];
				start++;
			}
		}
		return minlen;
	}
};