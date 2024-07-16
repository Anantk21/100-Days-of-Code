#include <iostream>
#include <vector>

class Solution {
public:
    int returnToBoundaryCount(std::vector<int>& nums) {
        int l = nums.size();
        int a = 0;
        int count = 0;
        int i = 0;
        while (i < l) {
            a += nums[i];
            if (a == 0) count++; 
            i++;
        }
        return count;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, -1, 2, -2, 3, -3};
    int result = solution.returnToBoundaryCount(nums);
    std::cout << "Return to boundary count: " << result << std::endl;
    return 0;
}
