#include <vector>
#include <string>
#include <bitset>
#include <algorithm>

using namespace std;

/*
318. Maximum Product of Word Lengths
Difficulty: Medium
Given a string array words, find the maximum value of length(word[i]) * length(word[j]) where the two words do not share common letters.
You may assume that each word will contain only lower case letters. If no such two words exist, return 0.

Example 1:
Given ["abcw", "baz", "foo", "bar", "xtfn", "abcdef"]
Return 16
The two words can be "abcw", "xtfn".

Example 2:
Given ["a", "ab", "abc", "d", "cd", "bcd", "abcd"]
Return 4
The two words can be "ab", "cd".

Example 3:
Given ["a", "aa", "aaa", "aaaa"]
Return 0
No such pair of words.
*/

class Solution {
public:
	int maxProduct(vector<string>& words) {
		vector<int> keys(words.size(), 0);
		for (int i = 0; i < words.size(); ++i) {
			for (char c : words[i])
				keys[i] |= 1 << (c - 'a');
		}
		int maxp = 0;
		for (int i = 0; i < words.size(); ++i) {
			for (int j = i + 1; j < words.size(); ++j) {
				if ((keys[i] & keys[j]) == 0) {
					int mul = words[i].size() * words[j].size();
					maxp = maxp > mul ? maxp : mul;
				}
			}
		}
		return maxp;
	}
};

class Solution1 {
public:
	int maxProduct(vector<string>& words) {
		vector<bitset<32>> charset(words.size());
		for (int i = 0; i < words.size(); ++i) {
			for (char c : words[i])
				charset[i].set(c - 'a');
		}
		int maxp = 0;
		for (int i = 0; i < words.size(); ++i) {
			for (int j = i + 1; j < words.size(); ++j) {
				if ((charset[i] & charset[j]).none()) {
					int mul = words[i].size() * words[j].size();
					maxp = maxp > mul ? maxp : mul;
				}
			}
		}
		return maxp;
	}
};
