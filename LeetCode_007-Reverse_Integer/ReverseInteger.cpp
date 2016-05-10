#include "ReverseInteger.h"
#include <iostream>

int main()
{
	Solution sol;
	int input;
	cout << "Input:";
	cin >> input;
	int output = sol.reverse(input);
	cout << "Output:" << output << endl;
	return 0;
}