#include <vector>
#include <algorithm>
using namespace std;

/*
329. Longest Increasing Path in a Matrix
Difficulty: Hard
Given an integer matrix, find the length of the longest increasing path.
From each cell, you can either move to four directions: left, right, up or down.
You may NOT move diagonally or move outside of the boundary (i.e. wrap-around is not allowed).

Example 1:
nums = [
[9,9,4],
[6,6,8],
[2,1,1]
]
Return 4
The longest increasing path is [1, 2, 6, 9].

Example 2:
nums = [
[3,4,5],
[3,2,6],
[2,2,1]
]
Return 4
The longest increasing path is [3, 4, 5, 6]. Moving diagonally is not allowed.
*/

class Solution {
public:
	int longestIncreasingPath(vector<vector<int>>& matrix) {
		int row = matrix.size();
		if (row == 0)
			return 0;
		int column = matrix[0].size();
		vector<vector<int>> visited(row, vector<int>(column, 0));
		Rows = row;
		Columns = column;
		int res = 0;
		int temp = 0;
		for (int i = 0; i < row; ++i) {
			for (int j = 0; j < column; ++j) {
				temp = IncreasingPathCore(matrix, visited, i, j);
				res = max(res, temp);
			}
		}
		return res;
	}
	int IncreasingPathCore(vector<vector<int>>& matrix, vector<vector<int>> &visited, int i, int j){
		if (visited[i][j])
			return visited[i][j];
		int up = 0;
		if (i > 0 && matrix[i][j] < matrix[i - 1][j])
			up = IncreasingPathCore(matrix, visited, i - 1, j);
		int down;
		if (i < Rows - 1 && matrix[i][j] < matrix[i + 1][j])
			down = IncreasingPathCore(matrix, visited, i + 1, j);
		int left;
		if (j > 0 && matrix[i][j] < matrix[i][j - 1])
			left = IncreasingPathCore(matrix, visited, i, j - 1);
		int right;
		if (j < Columns - 1 && matrix[i][j] < matrix[i][j + 1])
			right = IncreasingPathCore(matrix, visited, i, j + 1);
		visited[i][j] = max(max(up, down), max(left, right)) + 1;
		return visited[i][j];
	}
private:
	int Rows;
	int Columns;
};