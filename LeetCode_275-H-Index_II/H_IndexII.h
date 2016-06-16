#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

/*
275. H-Index II
Difficulty: Medium
Follow up for H-Index: What if the citations array is sorted in ascending order? Could you optimize your algorithm?

Hint:
Expected runtime complexity is in O(log n) and the input is sorted.
*/

class Solution {
public:
	int hIndex(vector<int>& citations) {
		if (citations.size() < 1)
			return 0;
		int size = citations.size();
		int start = 0;
		int end = size - 1;
		int h = 0;
		while (start <= end) {
			int mid = (start + end) / 2;
			if (citations[mid] > size - 1 - mid) {
				h = size - mid;
				end = mid - 1;
			}
			else
				start = mid + 1;
		}
		return h;
	}
};

class Solution1 {
public:
	int hIndex(vector<int>& citations) {
		if (citations.size() < 1)
			return 0;
		int h = 0;
		for (int i = citations.size() - 1; i >= 0; --i) {
			if (citations[i] > h)
				h++;
			else
				break;
		}
		return h;
	}
};