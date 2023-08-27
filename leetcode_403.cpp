#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstring>

using namespace std;

class Solution {
public:
    unordered_map<int, int> m;
    int dp[2000][2000];

    int solve(int i, int k, vector<int>& stones) {
        if (i == stones.size() - 1) {
            return true;
        }
        
        if (dp[i][k] != -1) {
            return dp[i][k];
        }

        bool k0 = false;
        bool kp = false;
        bool k1 = false;

        if (m.find(stones[i] + k) != m.end()) {
            k0 = solve(m[stones[i] + k], k, stones);
        }
        if (k > 1 && m.find(stones[i] + k - 1) != m.end()) {
            kp = solve(m[stones[i] + k - 1], k - 1, stones);
        }
        if (m.find(stones[i] + k + 1) != m.end()) {
            k1 = solve(m[stones[i] + k + 1], k + 1, stones);
        }

        dp[i][k] = k0 || kp || k1;
        return dp[i][k];
    }

    bool canCross(vector<int>& stones) {
        if (stones[1] - stones[0] != 1) {
            return false;
        }

        for (int i = 0; i < stones.size(); i++) {
            m[stones[i]] = i;
        }
        
        memset(dp, -1, sizeof(dp));

        return solve(1, 1, stones);
    }
};

int main() {
    Solution sol;
    vector<int> stones = {0, 1, 3, 5, 6, 8, 12, 17};

    if (sol.canCross(stones)) {
        cout << "The frog can cross the river." << endl;
    } else {
        cout << "The frog cannot cross the river." << endl;
    }

    return 0;
}
