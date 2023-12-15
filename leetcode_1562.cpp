#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int cnt = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i == j || j == n - i - 1){
                    cnt += mat[i][j];
                }
            }
        }
        return cnt;
    }
};

int main() {
    // Example usage
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution solution;
    int result = solution.diagonalSum(matrix);

    cout << "Diagonal sum: " << result << endl;

    return 0;
}
