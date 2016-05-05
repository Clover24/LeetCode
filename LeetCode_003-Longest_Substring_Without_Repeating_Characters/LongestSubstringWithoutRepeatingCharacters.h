#include <string>
#include <deque>
#include <algorithm>

using namespace std;

/*3. Longest Substring Without Repeating Characters
Difficulty: Medium
Given a string, find the length of the longest substring without repeating characters.
Examples:
Given "abcabcbb", the answer is "abc", which the length is 3.
Given "bbbbb", the answer is "b", with the length of 1.
Given "pwwkew", the answer is "wke", with the length of 3. 
Note that the answer must be a substring, "pwke" is a subsequence and not a substring.*/
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		deque<char> mydeque;
		int max = 0;
		for (int i = 0; i < s.length(); ++i) {
			deque<char>::iterator it = find(mydeque.begin(), mydeque.end(), s[i]);
			if (it != mydeque.end()) {
				max = mydeque.size() > max ? mydeque.size() : max;
				mydeque.erase(mydeque.begin(), it + 1);
			}
			mydeque.push_back(s[i]);
		}
		max = mydeque.size() > max ? mydeque.size() : max;
		return max;
	}
};