#include <iostream>

using namespace std;

class Solution {
public:
    bool reorderedPowerOf2(int n)
    {
        string nn = to_string(n);
        
        sort(nn.begin(), nn.end());
        
        for (int i = 0; i < 32; i++)
        {
            string pp = to_string(1 << i);
            
            sort(pp.begin(), pp.end());
            
            if (pp == nn)
                return true;
        }
        
        return false;
    }
};

void testSolution() {
    Solution sol;
    int n = 33; 

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
