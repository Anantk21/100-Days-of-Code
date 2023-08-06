#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool judgeCircle(string m) {
        int l = 0, d = 0;
        for (int i = 0; i < m.size(); i++) {
            switch (m[i]) {
                case 'R': l--; break;
                case 'L': l++; break;
                case 'U': d--; break;
                default: d++;
            }
        }
        return (l == 0 && d == 0);
    }
};

int main() {
    Solution solution;
    string moves = "UDLR"; // Replace this string with the moves you want to test
    bool result = solution.judgeCircle(moves);
    if (result) {
        cout << "The moves form a circle." << endl;
    } else {
        cout << "The moves do not form a circle." << endl;
    }

    return 0;
}
