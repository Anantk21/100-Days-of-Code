#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int characterReplacement(string str, int k) {
        int head = 0, tail = 0, ans = 0, cnt[26] = {};

        for (head = 0; head < str.length(); head++) {
            cnt[str[head] - 'A']++;
            while (head - tail + 1 - *max_element(cnt, cnt + 26) > k) {
                cnt[str[tail] - 'A']--;
                tail++;
            }
            ans = max(ans, head - tail + 1);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    string str;
    int k;

    cout << "Enter the string: ";
    cin >> str;
    cout << "Enter the value of k: ";
    cin >> k;

    int result = solution.characterReplacement(str, k);
    cout << "The length of the longest substring after " << k << " replacements is: " << result << endl;

    return 0;
}
