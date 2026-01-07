#include <iostream>
#include <vector>
using namespace std;
#define N 9

bool isSafe(vector<vector<int>> &grid, int r, int c, int num) { 
    for (int x = 0; x < N; x++)
        if (grid[r][x] == num || grid[x][c] == num || grid[r - r % 3 + x / 3][c - c % 3 + x % 3] == num)
            return false;
    return true;
}

bool solveSudoku(vector<vector<int>> &grid) {
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            if (grid[r][c] == 0) {
                for (int num = 1; num <= N; num++) {
                    if (isSafe(grid, r, c, num)) {
                        grid[r][c] = num;
                        if (solveSudoku(grid)) return true;
                        grid[r][c] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void printGrid(const vector<vector<int>> &grid) {
    for (auto &row : grid) {
        for (int num : row) cout << num << " ";
        cout << endl;
    }
}

int main() {
    vector<vector<int>> grid = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}};

    printGrid(grid);
    if (solveSudoku(grid)) {
        cout << "\nSolved:\n";
        printGrid(grid);
    } else {
        cout << "\nNo solution exists.";
    }
    return 0;
}
