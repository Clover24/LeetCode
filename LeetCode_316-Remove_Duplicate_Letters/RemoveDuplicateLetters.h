#include <string>
#include <stack>
#include <vector>

using namespace std;

/*
316. Remove Duplicate Letters
Difficulty: Hard
Given a string which contains only lowercase letters, remove duplicate letters so that every letter appear once and only once.
You must make sure your result is the smallest in lexicographical order among all possible results.

Example:
Given "bcabc"
Return "abc"

Given "cbacdcbc"
Return "acdb"
*/

class Solution {
public:
	string removeDuplicateLetters(string s) {
		string res;
		vector<int> count(26, 0);
		vector<bool> exist(26, false);
		stack<char> str;
		for (int i = 0; i < s.size(); ++i) 
			count[s[i] - 'a']++;
		for (int i = 0; i < s.size(); ++i) {
			if (exist[s[i] - 'a']) {
				count[s[i] - 'a']--;
				continue;
			}
			while (!str.empty() && str.top() > s[i] && count[str.top() - 'a']) {
				exist[str.top() - 'a'] = false;
				str.pop();
			}
			str.push(s[i]);
			exist[s[i] - 'a'] = true;
			count[s[i] - 'a']--;
		}
		while (!str.empty()) {
			res = str.top() + res;
			str.pop();
		}
		return res;
	}
};