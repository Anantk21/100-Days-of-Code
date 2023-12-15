#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        unordered_set<int> s1, s2;

        // Loop through each row
        for (int i = 0; i < n; i++) {
            // Loop through each column in the current row
            for (int j = 0; j < n; j++) {
                // Check for uniqueness in the current row
                if (s1.find(matrix[i][j]) != s1.end())
                    return false;
                else
                    s1.insert(matrix[i][j]);

                // Check for uniqueness in the current column
                if (s2.find(matrix[j][i]) != s2.end())
                    return false;
                else
                    s2.insert(matrix[j][i]);
            }

            // Clear sets for the next row
            s1.clear();
            s2.clear();
        }

        // If all rows and columns have unique elements, the matrix is valid
        return true;
    }
};
