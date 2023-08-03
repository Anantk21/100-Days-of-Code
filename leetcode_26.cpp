#include <vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int result = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {
                nums[result] = nums[i];
                ++result;
            }
        }
        return result;
    }
};

int main() {
    // Example usage:
    std::vector<int> nums = {1, 1, 2, 2, 3, 4, 5, 5, 5, 6,6,8};
    Solution solution;
    int newLength = solution.removeDuplicates(nums);

    // Print the modified array and its length after removing duplicates
    std::cout << "Modified Array: ";
    for (int i = 0; i < newLength; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "New Length: " << newLength << std::endl;

    return 0;
}
