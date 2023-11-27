#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        vector<int> temp;

        for (int i = 0; i < l.size(); i++) {
            int s = l[i];
            int e = r[i] + 1;
            temp = nums;
            sort(temp.begin() + s, temp.begin() + e);
            bool isArithmetic = true;
            for (int j = s; j < e - 2; j++) {
                if (temp[j + 1] - temp[j] != temp[j + 2] - temp[j + 1]) {
                    isArithmetic = false;
                    break;
                }
            }
            ans.push_back(isArithmetic);
        }
        return ans;
    }
};

int main() {
    // Test the Solution class
    Solution solution;

    // Example usage
    vector<int> nums = {4, 6, 5, 9, 3, 7};
    vector<int> l = {0, 0, 2};
    vector<int> r = {2, 3, 5};

    vector<bool> result = solution.checkArithmeticSubarrays(nums, l, r);

    // Display the result
    cout << "Result- ";
    for (bool val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
