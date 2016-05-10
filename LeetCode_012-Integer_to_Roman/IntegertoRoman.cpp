#include "IntegertoRoman.h"
#include <iostream>

int main()
{
	Solution sol;
	int input;
	cout << "Input:";
	cin >> input;
	string output = sol.intToRoman(input);
	cout << output << endl;
	return 0;
}