#include <iostream>
using namespace std;

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        // Provided Solution class implementation here
        // ...
    }
};

void testSolution() {
    Solution sol;
    int n = 46; // Replace this with any other number to test

    cout << "Checking if there is a power of 2 that has the same digits as " << n << " ... ";
    if (sol.reorderedPowerOf2(n))
        cout << "Yes, there is a power of 2 with the same digits." << endl;
    else
        cout << "No, there is no power of 2 with the same digits." << endl;
}

int main() {
    testSolution();
    return 0;
}
