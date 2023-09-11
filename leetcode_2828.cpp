#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    bool isAcronym(std::vector<std::string>& words, std::string s) {
        std::string n = "";

        int l = words.size();
        for (int i = 0; i < l; i++) {
            std::string m = words[i];
            if (!m.empty()) { // Check if the word is not empty to avoid accessing an out-of-range index.
                n.push_back(m[0]);
            }
        }
        if (n == s) {
            return true;
        }
        return false;
    }
};

int main() {
    Solution sol;
    std::vector<std::string> words = {"Hello", "World"};
    std::string acronym = "HW";
    bool isMatch = sol.isAcronym(words, acronym);

    if (isMatch) {
        std::cout << "The acronym matches the initial letters of the words." << std::endl;
    } else {
        std::cout << "The acronym does not match the initial letters of the words." << std::endl;
    }

    return 0;
}
