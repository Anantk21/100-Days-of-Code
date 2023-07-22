#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i += 2) {
            ans += nums[i];
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 4, 3, 2, 6, 5};
    int result = solution.arrayPairSum(nums);
    cout << "Result: " << result << endl;
    return 0;
}
