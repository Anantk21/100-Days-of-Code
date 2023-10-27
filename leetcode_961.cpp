#include <iostream>
#include <vector>

class Solution {
public:
    int repeatedNTimes(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int s = 0;
        int n = nums.size() - 1;
        while (s != n) {
            if (nums[s] == nums[s + 1]) {
                return nums[s];
            } else {
                s++;
            }
        }
        return 0;
    }
};

int main() {
    // Test your function here
    std::vector<int> nums = {1, 2, 3, 3};
    Solution solution;
    int result = solution.repeatedNTimes(nums);
    std::cout << "Repeated N Times: " << result << std::endl;
    return 0;
}
