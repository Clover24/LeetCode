#include <iostream>
#include <algorithm>

using namespace std;

/*
264. Ugly Number II
Difficulty: Medium
Write a program to find the n-th ugly number.

Ugly numbers are positive numbers whose prime factors only include 2, 3, 5.
For example, 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 is the sequence of the first 10 ugly numbers.
Note that 1 is typically treated as an ugly number.

Hint:
The naive approach is to call isUgly for every number until you reach the nth one.
Most numbers are not ugly. Try to focus your effort on generating only the ugly ones.
An ugly number must be multiplied by either 2, 3, or 5 from a smaller ugly number.
The key is how to maintain the order of the ugly numbers. Try a similar approach of merging from three sorted lists: L1, L2, and L3.
Assume you have Uk, the kth ugly number. Then Uk+1 must be Min(L1 * 2, L2 * 3, L3 * 5).
*/

class Solution {
public:
	int nthUglyNumber(int n) {
		if (n <= 0)
			return 0;
		int *uglynums = new int[n];
		uglynums[0] = 1;
		int *l2, *l3, *l5;
		l2 = l3 = l5 = uglynums;
		for (int i = 1; i < n; ++i) {
			int min = Min(*l2 * 2, *l3 * 3, *l5 * 5);
			uglynums[i] = min;
			if (*l2 * 2 == min)
				++l2;
			if (*l3 * 3 == min)
				++l3;
			if (*l5 * 5 == min)
				++l5;
		}
		int res = uglynums[n - 1];
		delete[] uglynums;
		return res;
	}
	int Min(int a, int b, int c) {
		int res = a < b ? a : b;
		res = res < c ? res : c;
		return res;
	}
};