#include <string>

using namespace std;

/*12. Integer to Roman
Difficulty: Medium
Given an integer, convert it to a roman numeral.
Input is guaranteed to be within the range from 1 to 3999.
*/
class Solution {
public:
	string intToRoman(int num) {
		string roman[4][10] = {
			{ "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" },
			{ "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" },
			{ "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" },
			{ "", "M", "MM", "MMM" }
		};
		string res;
		//res = roman[3][num / 1000] + roman[2][num % 1000 / 100] + roman[1][num % 100 / 10] + roman[0][num % 10];
		res.append(roman[3][num / 1000]);
		res.append(roman[2][num % 1000 / 100]);
		res.append(roman[1][num % 100 / 10]);
		res.append(roman[0][num % 10]);
		return res;
	}
};
