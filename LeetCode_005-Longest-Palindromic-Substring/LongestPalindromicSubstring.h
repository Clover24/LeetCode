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
	    if(s.length() <= 1) return s;
		string res;
		for (int i = 0; i < s.length() - 1; ++i) {
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