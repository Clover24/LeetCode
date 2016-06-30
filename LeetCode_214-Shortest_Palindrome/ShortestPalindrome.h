#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

/*
214. Shortest Palindrome
Difficulty: Hard
Given a string S, you are allowed to convert it to a palindrome by adding characters in front of it. Find and return the shortest palindrome you can find by performing this transformation.

For example:

Given "aacecaaa", return "aaacecaaa".

Given "abcd", return "dcbabcd".
*/

class Solution {
public:
	string shortestPalindrome(string s) {
		string rs = s;
		reverse(rs.begin(), rs.end());
		int len = s.size();
		int i = len;
		for(; i > 0; --i) {
			string sub = s.substr(0, i);
			string rsub = rs.substr(len - i);
			if (sub == rsub)
				break;
		}
		string res = rs.substr(0, len - i) + s;
		return res;
	}
};
