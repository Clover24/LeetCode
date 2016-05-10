#include <vector>

using namespace std;

/*11. Container With Most Water
Difficulty: Medium
Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai).
n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0).
Find two lines, which together with x-axis forms a container, such that the container contains the most water.
Note: You may not slant the container.
*/

class Solution {
public:
	int maxArea(vector<int>& height) {
		int i = 0;
		int j = height.size() - 1;
		int maxarea = 0;
		while (i < j) {
			int minheight;
			if (height[i] < height[j]) {
				minheight = height[i];
				i++;
			}
			else {
				minheight = height[j];
				j--;
			}
			int area = minheight * (j - i + 1);
			maxarea = maxarea > area ? maxarea : area;
		}
		return maxarea;
	}
};