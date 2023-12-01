#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int maximizeGreatness(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        
        int i = 0, j = 0, cnt = 0;
        
        while (j < nums.size()) {
            if (nums[i] >= nums[j]) {
                j++;
            } else if (nums[i] < nums[j]) {
                cnt++;
                i++;
                j++;
            }
        }
        return cnt;
    }
};

int main() {
    // Example usage
    std::vector<int> exampleVector = {3, 1, 4, 2, 2};
    Solution solution;
    int result = solution.maximizeGreatness(exampleVector);
    
    
    std::cout << "Result: " << result << std::endl;

    return 0;
}
