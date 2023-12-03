#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool checkString(std::string s) {
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == 'b' && s[i + 1] == 'a') {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;

    // Example usage
    std::string inputString = "example_string";
    bool result = solution.checkString(inputString);

    // Print the result
    std::cout << "Result: " << (result ? "true" : "false") << std::endl;

    return 0;
}
