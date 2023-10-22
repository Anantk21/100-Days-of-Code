#include <vector>

class Solution {
public:
    int longestOnes(std::vector<int>& nums, int k) {
        int head = 0, tail = 0, ans = 0;
        for (head = 0; head < nums.size(); head++) {
            if (nums[head] == 0) {
                k--;
            }
            while (k < 0) {
                if (nums[tail] == 0) {
                    k++;
                }
                tail++;
            }
            ans = std::max(ans, head - tail + 1);
        }
        return std::max(ans, head - tail);
    }
};
