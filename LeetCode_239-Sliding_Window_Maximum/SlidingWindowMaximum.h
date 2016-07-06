#include <vector>
#include <deque>

using namespace std;

/*
239. Sliding Window Maximum
Difficulty: Hard
Given an array nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

For example,
Given nums = [1,3,-1,-3,5,3,6,7], and k = 3.

Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
1 [3  -1  -3] 5  3  6  7       3
1  3 [-1  -3  5] 3  6  7       5
1  3  -1 [-3  5  3] 6  7       5
1  3  -1  -3 [5  3  6] 7       6
1  3  -1  -3  5 [3  6  7]      7
Therefore, return the max sliding window as [3,3,5,5,6,7].
*/

class Solution {
public:
	vector<int> maxSlidingWindow(vector<int>& nums, int k) {
		vector<int> max;
		if (nums.size() <= 0 || k <= 0 || k >nums.size())
			return max;
		deque<int> index;
		for (int i = 0; i < k; ++i) {
			while (!index.empty() && nums[i] >= nums[index.back()])
				index.pop_back();
			index.push_back(i);
		}
		for (int i = k; i < nums.size(); ++i) {
			max.push_back(nums[index.front()]);
			if (!index.empty() && index.front() <= i - k)
				index.pop_front();
			while (!index.empty() && nums[i] >= nums[index.back()])
				index.pop_back();
			index.push_back(i);
		}
		max.push_back(nums[index.front()]);
		return max;
	}
};
