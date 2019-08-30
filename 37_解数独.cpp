#include "pch.h"
class Solution {
public:
	bool recursionSolveSudoku(vector<vector<char>>& board, bool(*row)[9], bool(*column)[9], bool(*bucket)[9], int r, int c) {
		if (c == 9) {
			c = 0;
			r += 1;
			if (r == 9) {
				return true;
			}
		}

		while (board[r][c]!='.') {
			c++;
			if (c == 9) {
				c = 0;
				r += 1;
				if (r == 9) {
					return true;
				}
			}
		}

		int index = r / 3 * 3 + c / 3;
		for (int i = 0; i < 9; i++) {
			if (!row[r][i] && !column[c][i] && !bucket[index][i]) {
				board[r][c] = '1' + i;
				row[r][i] = true;
				column[c][i] = true;
				bucket[index][i] = true;
				if (recursionSolveSudoku(board, row, column, bucket, r, c + 1)) {
					return true;
				}
				board[r][c] = '.';
				row[r][i] = false;
				column[c][i] = false;
				bucket[index][i] = false;
			}
		}
		return false;
	}



	void solveSudoku(vector<vector<char>>& board) {
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

					row[i][n] = true;
					column[j][n] = true;
					bucket[index][n] = true;
				}
			}
		}
		recursionSolveSudoku(board, row, column, bucket, 0, 0);
	}
};