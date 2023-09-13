#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> summaryRanges(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<std::string> ans;
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (i != n - 1 && nums[i] + 1 == nums[i + 1]) {
                // Continue the range.
            } else {
                std::string a;
                if (nums[j] != nums[i]) {
                    a = std::to_string(nums[j]) + "->" + std::to_string(nums[i]);
                } else {
                    a = std::to_string(nums[i]);
                }
                ans.push_back(a);
                j = i + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {0, 1, 2, 4, 5, 7};
    std::vector<std::string> result = sol.summaryRanges(nums);

    std::cout << "Summary Ranges:" << std::endl;
    for (const std::string& range : result) {
        std::cout << range << " ";
    }
    std::cout << std::endl;

    return 0;
}
