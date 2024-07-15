#include <iostream>
#include <string>
#include <algorithm>  // For std::max

using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for (auto i : n) {
            ans = max(ans, i - '0');
        }
        return ans;
    }
};

int main() {
    Solution sol;
    string n;
    
    cout << "Enter a string representing a number: ";
    cin >> n;

    int result = sol.minPartitions(n);
    cout << "Result: " << result << endl;

    return 0;
}
