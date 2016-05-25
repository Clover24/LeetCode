#include <string>

using namespace std;

/*
345. Reverse Vowels of a String
Difficulty: Easy
Write a function that takes a string as input and reverse only the vowels of a string.

Example 1:
Given s = "hello", return "holle".

Example 2:
Given s = "leetcode", return "leotcede".
*/

class Solution {
public:
	string reverseVowels(string s) {
		if (s.length() <= 0)
			return s;
		int i = 0;
		int j = s.length() - 1;
		while (i < j) {
			while (i < j && !IsVowels(s[i]))
				i++;
			while (i < j && !IsVowels(s[j]))
				j--;
			if (i < j) {
				int temp = s[i];
				s[i] = s[j];
				s[j] = temp;
				i++; j--;
			}
		}
		return s;
	}
	bool IsVowels(char c) {
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			return true;
		else
			return false;
	}
};