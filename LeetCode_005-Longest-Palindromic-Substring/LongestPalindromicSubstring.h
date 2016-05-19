#include <string>

using namespace std;

/*5. Longest Palindromic Substring
Difficulty: Medium
Given a string S, find the longest palindromic substring in S.
You may assume that the maximum length of S is 1000, and there exists one unique longest palindromic substring.
*/

class Solution {
public:
	string longestPalindrome(string s) {
		int flag[3] = { 0 };
		int len[3] = { 0 };
		int i;
		for (i = 0; i < s.length() - 1; ++i) {
			if (s[i] == s[i + 1]) {
				flag[1] = longestPalindromeCore(s, s.length(), i, i + 1);
				len[1] = 2 * (i - flag[1] + 1);
			}
			else
				len[1] = 0;
			if (i && s[i - 1] == s[i + 1]) {
				flag[2] = longestPalindromeCore(s, s.length(), i - 1, i + 1);
				len[2] = 2 * (i - flag[2]) + 1;
			}
			else
				len[2] = 0;
			if (len[1] && len[0] < len[1]) {
				len[0] = len[1];
				flag[0] = flag[1];
			}
			if (len[2] && len[0] < len[2]) {
				len[0] = len[2];
				flag[0] = flag[2];
			}
			if (len[0] == s.length())
				return s;
		}
		if (i == 0)
			return s;
		string res(s.begin() + flag[0], s.begin() + flag[0] + len[0]);
		return res;
	}
	int longestPalindromeCore(string &s, int length, int begin, int end) {
		while (begin >= 0 && end < length) {
			if (s[begin] != s[end])
				break;
			begin--;
			end++;
		}
		return begin + 1;
	}
};

class Solution56 {
public:
	string longestPalindrome(string s) {
	    if(s.length() <= 1) return s;
		string res;
		for (int i = 0; i < s.length(); ++i) {
		    string s1, s2;
			s1 = longestPalindromeCore(s, i, i + 1);
			s2 = longestPalindromeCore(s, i , i);
			if (res.length() < s1.length()) 
			    res = s1;
			if (res.length() < s2.length()) 
			    res = s2;
			if(res.length() == s.length())
			    break;
		}
		return res;
	}
	string longestPalindromeCore(string &s, int begin, int end) {
		while (begin >= 0 && end < s.length()) {
		    if(s[begin] != s[end]) 
		        break;
			begin--;
			end++;
		}
		return s.substr(begin + 1, end - 1 - begin);
	}
};