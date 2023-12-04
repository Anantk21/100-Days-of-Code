#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string breakPalindrome(string p) {
        if (p.size() <= 1)
            return "";
        for (int i = 0; i < p.size() / 2; i++) {
            if (p[i] != 'a') {
                p[i] = 'a';
                return p;
                // break; // This line is not strictly necessary as 'return' will exit the function
            }
        }
        p[p.size() - 1] = 'b';
        return p;
    }
};

int main() {
    // You can test your function here if needed
    Solution solution;
    string result = solution.breakPalindrome("your_input_here");
    cout << "Result: " << result << endl;

    return 0;
}
