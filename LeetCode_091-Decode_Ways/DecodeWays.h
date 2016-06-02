#include <string>

using namespace std;

/*
91. Decode Ways
Difficulty: Medium
A message containing letters from A-Z is being encoded to numbers using the following mapping:
'A' -> 1
'B' -> 2
...
'Z' -> 26
Given an encoded message containing digits, determine the total number of ways to decode it.

For example,
Given encoded message "12", it could be decoded as "AB" (1 2) or "L" (12).
The number of ways decoding "12" is 2.
*/

class Solution {
public:
	int numDecodings(string s) {
		if (s.size() <= 0)
			return 0;
		int numOne, numTwo;
		numOne = numTwo = 1;
		int Final = 0;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '0') 
				numTwo = 0;
			Final = numTwo;
			if (IsEncoded(s, i))
				Final += numOne;
			numOne = numTwo;
			numTwo = Final;
		}
		return Final;
	}
	bool IsEncoded(const string &s, int index) {
		if (index < s.size() && index > 0) {
			string temp(s, index - 1, 2);
			int num = stoi(temp, NULL);
			if (num > 9 && num <= 26)
				return true;
		}
		return false;
	}
};