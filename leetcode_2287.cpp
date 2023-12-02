#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int> mpt;
        for (auto a : target) {
            mpt[a]++;
        }
        unordered_map<char, int> mps;
        for (auto a : s) {
            mps[a]++;
        }
        int mn = INT_MAX;
        for (auto a : mpt) {
            mn = min(mn, mps[a.first] / a.second);
        }
        return mn;
    }
};

int main() {
    Solution solution;

    // Example usage
    string s1 = "ilovecodingonleetcode";
    string target1 = "code";
    cout << "Example 1: " << solution.rearrangeCharacters(s1, target1) << endl;

    // string s2 = "abcba";
    // string target2 = "abc";
    // cout << "Example 2: " << solution.rearrangeCharacters(s2, target2) << endl;

    string s3 = "abbaccaddaeea";
    string target3 = "aaaaa";
    cout << "Example 3: " << solution.rearrangeCharacters(s3, target3) << endl;

    return 0;
}
