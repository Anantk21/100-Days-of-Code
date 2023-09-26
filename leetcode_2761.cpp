#include <iostream>
#include <vector>

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1)
            return false;
        if (n == 2 || n == 3)
            return true;
        if (n % 2 == 0 || n % 3 == 0)
            return false;
        for (int i = 5; i * i <= n; i = i + 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }

    std::vector<std::vector<int>> findPrimePairs(int n) {
        std::vector<std::vector<int>> res;

        for (int i = 2; i <= n / 2; i++) {
            if (isPrime(i) && isPrime(n - i)) {
                res.push_back({i, n - i});
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    int n = 20; // Change this value to find prime pairs for a different 'n'.
    std::vector<std::vector<int>> result = sol.findPrimePairs(n);

    std::cout << "Prime pairs that sum to " << n << ":" << std::endl;
    for (const auto& pair : result) {
        std::cout << "(" << pair[0] << ", " << pair[1] << ")" << std::endl;
    }

    return 0;
}
