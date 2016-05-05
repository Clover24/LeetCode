#include <string>

using namespace std;

/*151. Reverse Words in a String
Difficulty : Medium
Given an input string, reverse the string word by word.
For example,
Given s = "the sky is blue",
return "blue is sky the".*/
class Solution {
public:
	void reverseWords(string &s) {
		if (s.length() <= 0) return;
		unsigned int begin = 0;
		while (s[begin] == ' ')
			s.erase(s.begin());
		int end = s.length() - 1;
		Reserve(s, begin, end);
		end = begin;
		while (begin < s.length()) {
			if (s[begin] == ' ' && s[end] == ' ')
				s.erase(s.begin() + begin);
			else if (s[end] == ' ' || s[end] == '\0') {
				Reserve(s, begin, end - 1);
				begin = ++end;
			}
			else
				end++;
		}
	}
	void Reserve(string &num, int begin, int end) {
		if (begin >= end) return;
		char temp;
		while (begin < end) {
			temp = num[begin];
			num[begin] = num[end];
			num[end] = temp;
			begin++;
			end--;
		}
	}
};
