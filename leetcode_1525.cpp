#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int numSplits(string s) {
        int n = s.size(), ans = 0;
        unordered_map<char, int> left, right;

        for (int i = 0; i < n; i++)
            right[s[i]]++;

        for (int i = 0; i < n; i++) {
            left[s[i]]++;
            right[s[i]]--;

            if (right[s[i]] == 0)
                right.erase(s[i]);

            if (left.size() == right.size())
                ans++;
        }

        return ans;
    }
};

int main() {
    
    Solution solution;
    string input = "aacaba";
    int result = Solution.numSplits(input);

    cout << "Result: " << result << endl;

    return 0;
}
