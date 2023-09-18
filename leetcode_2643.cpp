#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> rowAndMaximumOnes(std::vector<std::vector<int>>& mat) {
        int row = 0;
        int max = 0;
        for (int i = 0; i < mat.size(); i++) {
            int one = 0;
            for (int j = 0; j < mat[0].size(); j++) {
                if (mat[i][j] == 1) {
                    one++;
                }
            }
            if (one > max) {
                max = one;
                row = i;
            }
        }
        return {row, max};
    }
};

int main() {
    Solution sol;
    std::vector<std::vector<int>> matrix = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };
    
    std::vector<int> result = sol.rowAndMaximumOnes(matrix);

    std::cout << "Row with the maximum number of ones: " << result[0] << std::endl;
    std::cout << "Maximum number of ones in that row: " << result[1] << std::endl;

    return 0;
}
