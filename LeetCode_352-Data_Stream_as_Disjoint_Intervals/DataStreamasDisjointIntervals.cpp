#include <iostream>
#include "DataStreamasDisjointIntervals.h"

int main()
{
	int funcs[] = {0, 1, 2, 1, 2 , 1, 2, 1, 2, 1, 2};
	int nums[] = {1, 3, 7, 2, 6};
	vector<int> func(funcs, funcs + sizeof(funcs) / sizeof(int));
	vector<int> num(nums, nums + sizeof(nums) / sizeof(int));
	if (func.size() <= 0)
		return 0;
	else if (func.size() && func[0] != 0)
		return 0;
	SummaryRanges obj;
	int val;
	int j = 0;
	for (int i = 0; i < func.size(); ++i) {
		switch (func[i]) {
		case 1:
			val = num[j];
			obj.addNum(val);
			j++;
			break;
		case 2:
			vector<Interval> param_2 = obj.getIntervals();
			for (int k = 0; k < param_2.size(); ++k)
				cout << "[" << param_2[k].start << "," << param_2[k].end << "]";
			cout << endl;
		}
	}
	return 0;
}