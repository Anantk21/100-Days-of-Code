#include <iostream>

class Solution {
public:
    int minimumNumbers(int sum, int k) {
        if (sum == 0) return 0;
        for (int i = 1; i <= 10; ++i)
            if ((i * k) % 10 == sum % 10 && i * k <= sum) return i;
        return -1;
    }
};

int main() {
    // Example usage
    Solution solution;
    int sum = 15;
    int k = 3;
    int result = solution.minimumNumbers(sum, k);

    // Display the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}
