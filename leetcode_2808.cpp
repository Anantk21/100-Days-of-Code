#include <iostream>

class Solution {
public:
    int accountBalanceAfterPurchase(int p) {
        int r = p % 10;
        if (r >= 0 && r < 5)
            p = p - r;
        else
            p = p + 10 - r;
        return 100 - p;
    }
};

int main() {
    Solution sol;
    
    // Example usage:
    int purchasePrice = 42;
    int accountBalance = sol.accountBalanceAfterPurchase(purchasePrice);

    std::cout << "Account balance after purchase: $" << accountBalance << std::endl;

    return 0;
}
