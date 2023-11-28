#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        
        int r_sum, t_sum;
        int m = rolls.size();
        
        int temp_sum = accumulate(rolls.begin(), rolls.end(), 0);
        
        t_sum = mean * (m + n);
        r_sum = t_sum - temp_sum;
        
        if (r_sum > 6 * n || r_sum < n) {
            return {};
        }
        
        int a = r_sum / n;
        int b = r_sum % n;
        
        vector<int> ans(n, a);
        
        for (int i = 0; i < b; i++) {
            ans[i]++;
        }
        return ans;
    }
};

int main() {
    // Example usage
    vector<int> rolls = {1, 2, 3, 4};
    int mean = 4;
    int n = 2;

    Solution solution;
    vector<int> result = solution.missingRolls(rolls, mean, n);

    // Print the result
    cout << "Result: [";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
