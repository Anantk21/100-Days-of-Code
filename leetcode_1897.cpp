#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        map<char, int> mp;
        if (n == 1) {
            return true;
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < words[i].size(); j++) {
                mp[words[i][j]]++;
            }
        }
        
        for (auto it : mp) {
            if (it.second % n != 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    vector<string> words = {"abc", "aabc", "bc"};
    cout << sol.makeEqual(words) << endl;  // Expected output: 0 (or false)
    
    vector<string> words2 = {"abc", "abc", "bc"};
    cout << sol.makeEqual(words2) << endl;  // Expected output: 1 (or true)
    
    return 0;
}
