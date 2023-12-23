#include <iostream>
#include <string>

class Solution {
public:
    int balancedStringSplit(std::string s) {
        int ans = 0;
        int n = s.length();
        int r = 0;
        int l = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                r++;
            }
            if(s[i]=='L'){
                l++;
            }
            if(r==l){
                ans++;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    std::string input = "RLRRLLRLRL";
    std::cout << "Number of balanced substrings: " << sol.balancedStringSplit(input) << std::endl;
    return 0;
}
