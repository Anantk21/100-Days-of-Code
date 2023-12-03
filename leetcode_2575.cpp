#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> divisibilityArray(std::string word, int m) {
        int n = word.length();
        std::vector<int> ans(n, 0);
        long long int x = 0;
        for (int i = 0; i < n; i++) {
            x = x * 10 + (word[i] - '0');
            x = x % m;
            if (x % m == 0) {
                ans[i] = 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;

    // Example usage
    std::string inputWord = "12345"; // Replace with your input string
    int m = 3; // Replace with your value of m
    std::vector<int> result = solution.divisibilityArray(inputWord, m);

    // Print the result
    std::cout << "Result:";
    for (int i : result) {
        std::cout << " " << i;
    }
    std::cout << std::endl;

    return 0;
}
