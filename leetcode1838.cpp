#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        // ... (your provided code)
        sort(nums.begin(), nums.end());
        long int i = 0, j = 0, sum = 0, l = 0, tsum = 0;
        for (i = 0; i < nums.size(); i++) {
            sum += nums[i];
            while ((i - j + 1) * nums[i] - sum > k) {
                sum -= nums[j];
                j++;
            }
            l = max(l, i - j + 1);
        }
        return l;
    }
};

int main() {
    Solution solution;

    // Example usage:
    vector<int> nums = {1, 2, 4};
    int k = 5;

    int result = solution.maxFrequency(nums, k);

    cout << "Maximum Frequency: " << result << endl;

    return 0;
}
