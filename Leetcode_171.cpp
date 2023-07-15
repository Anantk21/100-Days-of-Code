#include <string>
#include<iostream>
using namespace std;


class Solution {
public:
    int titleToNumber(std::string columnTitle) {
        int ans = 0;
        for (auto c : columnTitle) {
            int x = c - 'A' + 1;
            ans = ans * 26 + x;
        }
        return ans;
    }
};

int main() {
    Solution solution;
    std::string columnTitle = "AB";
    int columnNumber = solution.titleToNumber(columnTitle);
    printf("Column Number: %d\n", columnNumber);

    return 0;
}
