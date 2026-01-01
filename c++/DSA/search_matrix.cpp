#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int rows = matrix.size();
        int cols = matrix[0].size();
        int low = 0, high = rows * cols - 1; // Treat the matrix as a flattened 1D array

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int row = mid / cols;  // Get row index
            int col = mid % cols;  // Get column index

            if (matrix[row][col] == target) {
                return true;
            } else if (matrix[row][col] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return false;
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    Solution sol;
    int target;
    cout << "Enter target: ";
    cin >> target;

    if (sol.searchMatrix(matrix, target)) {
        cout << "Target found!" << endl;
    } else {
        cout << "Target not found!" << endl;
    }

    return 0;
}
