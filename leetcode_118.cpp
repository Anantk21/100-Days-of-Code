#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output(numRows);
        for(int i=0; i<numRows; i++){
            output[i].resize(i+1, 1);
            for(int j=1; j<i; j++){
                output[i][j] = output[i-1][j-1] + output[i-1][j];
            }
        }
        return output;
    }
};

int main() {
    Solution solution;
    int numRows = 6; // Set the number of rows you want to generate here
    
    vector<vector<int>> result = solution.generate(numRows);
    
    // Printing the generated Pascal's Triangle
    for (const vector<int>& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
