#include <bits/stdc++.h> 

int solve(int i, int j, int m, int n, vector<vector<int>>& dpGrid) {
    if (i < 0 || j < 0) return 0;
    if (i == 0 && j == 0) return 1;

    if (dpGrid[i][j] != -1) return dpGrid[i][j];

    return dpGrid[i][j] = solve(i - 1, j, m, n, dpGrid) + solve(i, j - 1, m, n, dpGrid);
}
int uniquePaths(int m, int n) {
    vector<vector<int>> dpGrid(m, vector<int>(n, -1));
    dpGrid[0][0] = 0;

    return solve(m - 1, n - 1, m, n, dpGrid);
}
