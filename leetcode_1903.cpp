#include <iostream>
#include <string>\

using namespace std;

class Solution {
public:
    std::string largestOddNumber(std::string num) {
        int i = num.length() - 1;

        while (i >= 0) {
            int n = num[i];
            if (n % 2 == 1) {
                return num.substr(0, i + 1);
            } else {
                i--;
            }
        }
        return "";
    }
};

int main() {
    Solution solution;

    // Example usage
    std::string num = "123456";
    std::string result = solution.largestOddNumber(num);

    // Displaying the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}
