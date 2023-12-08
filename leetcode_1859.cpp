
#include <iostream>
#include <vector>

class Solution {
public:
    std::string sortSentence(std::string s) {
        std::string word;
        std::vector<std::string> v(10);
        
        for(int i = 0; i < s.size(); i++) {
            if(std::isdigit(s[i])) {
                v[s[i] - '0'] = word + " ";
                word = "";
                i++;
            } else {
                word += s[i];
            }
        }

        std::string ans;
        for(const std::string &x : v) {
            ans += x;
        }

        // Remove the trailing space
        ans.pop_back();

        return ans;
    }
};

int main() {
    Solution solution;
    std::string input = "is2 sentence4 This1 a3 test";
    std::string output = solution.sortSentence(input);
    std::cout << output << std::endl;

    return 0;
}
