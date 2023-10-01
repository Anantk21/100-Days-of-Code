#include <iostream>
#include <string>

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::string result = "", word;
        for (char ch : s) {
            if (ch != ' ') {
                word += ch;
            } else {
                std::reverse(word.begin(), word.end());
                result += word + " ";
                word = "";
            }
        }
        std::reverse(word.begin(), word.end());
        result += word;
        return result;
    }
};

int main() {
    Solution solution;
    std::string input1 = "Let's take LeetCode contest";
    std::string input2 = "God Ding";

    std::string output1 = solution.reverseWords(input1);
    std::string output2 = solution.reverseWords(input2);

    std::cout << output1 << std::endl;  // Output: "s'teL ekat edoCteeL tsetnoc"
    std::cout << output2 << std::endl;  // Output: "doG gniD"

    return 0;
}
