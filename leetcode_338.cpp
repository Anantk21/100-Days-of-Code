#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> ans;
		
        // iterating from 0 to n
        for(int i = 0; i <= n; i++) {
            // sum is initialized as 0
            int sum = 0;
            int num = i;
			
            // while num not equals zero
            while(num != 0) {
                // we have to count 1's in the binary representation of i, therefore % 2
                sum += num % 2;
                num = num / 2;
            }
			
            // add sum to ans vector
            ans.push_back(sum);
        }
		
        // return
        return ans;
    }
};

int main() {
    Solution solution;
    
    int n = 10; // You can change the value of n as needed.
    std::vector<int> result = solution.countBits(n);

    std::cout << "Count of 1's in binary representation from 0 to " << n << ": ";
    for (int i = 0; i <= n; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
