#include <vector>
#include <stack>

using namespace std;

/*
45. Jump Game II
Difficulty: Hard
Given an array of non-negative integers, you are initially positioned at the first index of the array.
Each element in the array represents your maximum jump length at that position.
Your goal is to reach the last index in the minimum number of jumps.

For example:
Given array A = [2,3,1,1,4]
The minimum number of jumps to reach the last index is 2. (Jump 1 step from index 0 to 1, then 3 steps to the last index.)

Note:
You can assume that you can always reach the last index.
*/

class Solution {
public:
	int jump(vector<int>& nums) {
		if (nums.size() <= 1)
			return 0;
		stack<int> steps;
		int start, end;
		steps.push(0);
		start = 0;
		end = 0;
		while (end == 0 || start < end) {
			int i = start;
			if (i + nums[i] >= nums.size() - 1)
				break;
			if (i == 0) {
				steps.push(nums[i]);
				end = nums[i];
			}
			else {
				for (int j = 1; j <= nums[i]; ++j) {
					while (i + j > steps.top() && steps.top() != end)
						steps.pop();
					if (i + j > steps.top())
						steps.push(i + j);
				}
				start = end;
				end = steps.top();
				i = start;
				if (start == end && nums[end] == 0)
					return 0;
			}
		}
		return steps.size();
	}
};