#include "pch.h"
class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		bool row[9][9] = { 0 };
		bool column[9][9] = { 0 };
		bool bucket[9][9] = { 0 };
		int n;
		char ch;
		int index;
		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board[i].size(); j++) {
				ch = board[i][j];
				if (ch != '.') {
					n = ch - '1';
					index = i / 3 * 3 + j / 3;
					if (row[i][n] || column[j][n] || bucket[index][n]) {
						return false;
					}
					else {
						row[i][n] = true;
						column[j][n] = true;
						bucket[index][n] = true;
					}
				}
			}
		}
		return true;
	}
};