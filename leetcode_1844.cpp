#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string replaceDigits(string s) {
        int n = s.length();
        for (int i = 1; i < n; i += 2) {
            int c = s[i] - '0';
            int j = (int)s[i-1] + c;
            s[i] = (char)j;
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s;
    
    cout << "Enter a string: ";
    cin >> s;

    string result = sol.replaceDigits(s);
    cout << "Result: " << result << endl;

    return 0;
}
