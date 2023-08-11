#include <iostream>
#include <vector>

class Solution {
public:
    int change(int amount, std::vector<int>& coins) {
        int n = coins.size();
        std::vector<std::vector<int>> dp(n + 1, std::vector<int>(amount + 1, 0));
        
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= amount; j++) {
                if (j >= coins[i - 1]) {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i - 1]];
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        
        return dp[n][amount];
    }
};

int main() {
    Solution solution;
    int amount = 5;
    std::vector<int> coins = {1, 2, 5};
    int result = solution.change(amount, coins);
    std::cout << "Number of combinations to make " << amount << " with given coins: " << result << std::endl;
    return 0;
}
