#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int minimizeMax(std::vector<int>& v, int p) {
       std::sort(v.begin(), v.end());
       int n = v.size();
       int ans = v[n-1] - v[0];
       int i = 0, j = ans;
       while (i <= j) {
           int m = (i + j) / 2;
           int total = 0;
           int k = 0;
           while (k < n - 1) {
               if (v[k + 1] - v[k] <= m) {
                   total++;
                   k += 2;
               } else {
                   k++;
               }
           }
           if (total >= p) {
               ans = m;
               j = m - 1;
           } else {
               i = m + 1;
           }
       }
       return ans;
    }
};

int main() {
    std::vector<int> v = {3, 9, 7, 12, 6};
    int p = 2;

    Solution solution;
    int result = solution.minimizeMax(v, p);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
