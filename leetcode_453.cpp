#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        return accumulate(begin(nums), end(nums), 0) - ((int)nums.size() * (int)*min_element(begin(nums), end(nums)));
    }
};

int main() {
    // Test the Solution class
    vector<int> nums = {1,2,3,4,5};
    Solution solution;
    int minMovesResult = solution.minMoves(nums);
    cout << "Minimum Moves: " << minMovesResult << endl;

    return 0;
}
