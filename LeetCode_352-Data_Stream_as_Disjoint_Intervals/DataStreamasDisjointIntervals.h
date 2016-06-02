#include <vector>
#include <set>

using namespace std;

/*
352. Data Stream as Disjoint Intervals
Difficulty: Hard
Given a data stream input of non-negative integers a1, a2, ..., an, ..., summarize the numbers seen so far as a list of disjoint intervals.
For example, suppose the integers from the data stream are 1, 3, 7, 2, 6, ..., then the summary will be:
[1, 1]
[1, 1], [3, 3]
[1, 1], [3, 3], [7, 7]
[1, 3], [7, 7]
[1, 3], [6, 7]

Follow up:
What if there are lots of merges and the number of disjoint intervals are small compared to the data stream's size?
*/

//Definition for an interval.
struct Interval {
	int start;
	int end;
	Interval() : start(0), end(0) {}
	Interval(int s, int e) : start(s), end(e) {}
};
class SummaryRanges {
public:
	/** Initialize your data structure here. */
	SummaryRanges() {

	}

	void addNum(int val) {
		myset.insert(val);
	}

	vector<Interval> getIntervals() {
		vector<Interval> res;
		if (myset.size() <= 0)
			return res;
		set<int>::iterator start, end;
		start = end = myset.begin();
		for (set<int>::iterator it = myset.begin(); it != myset.end(); ++it) {
			if (it != myset.begin() && *it > *end + 1) {
				Interval *inter = new Interval(*start, *end);
				res.push_back(*inter);
				start = it;
			}
			end = it;
		}
		if (myset.begin() != myset.end()) {
			Interval *inter = new Interval(*start, *end);
			res.push_back(*inter);
		}
		return res;
	}
private:
	set<int> myset;
};
